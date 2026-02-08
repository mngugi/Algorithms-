// neural_network.c - Complete & Stable Implementation
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define INPUT_SIZE 3
#define HIDDEN_SIZE 6
#define OUTPUT_SIZE 1
#define LEARNING_RATE 0.01
#define EPOCHS 2000

typedef struct {
    double weights_ih[HIDDEN_SIZE][INPUT_SIZE];
    double bias_h[HIDDEN_SIZE];
    double weights_ho[OUTPUT_SIZE][HIDDEN_SIZE];
    double bias_o[OUTPUT_SIZE];
    double hidden[HIDDEN_SIZE];
    double output[OUTPUT_SIZE];
    double z_hidden[HIDDEN_SIZE];
    double z_output[OUTPUT_SIZE];
} NeuralNetwork;

/* ---------- Activation Functions ---------- */
double relu(double x) {
    return (x > 0) ? x : 0.01 * x;   // Leaky ReLU
}

double relu_derivative(double x) {
    return (x > 0) ? 1.0 : 0.01;
}

/* ---------- Initialization ---------- */
void init_network(NeuralNetwork *nn) {
    srand(time(NULL));

    for (int i = 0; i < HIDDEN_SIZE; i++) {
        for (int j = 0; j < INPUT_SIZE; j++) {
            nn->weights_ih[i][j] =
                ((double)rand() / RAND_MAX - 0.5) * sqrt(2.0 / INPUT_SIZE);
        }
        nn->bias_h[i] = 0.0;
    }

    for (int i = 0; i < OUTPUT_SIZE; i++) {
        for (int j = 0; j < HIDDEN_SIZE; j++) {
            nn->weights_ho[i][j] =
                ((double)rand() / RAND_MAX - 0.5) * sqrt(2.0 / HIDDEN_SIZE);
        }
        nn->bias_o[i] = 0.0;
    }
}

/* ---------- Forward Propagation ---------- */
void forward_propagation(NeuralNetwork *nn, double input[INPUT_SIZE]) {
    for (int i = 0; i < HIDDEN_SIZE; i++) {
        nn->z_hidden[i] = nn->bias_h[i];
        for (int j = 0; j < INPUT_SIZE; j++) {
            nn->z_hidden[i] += nn->weights_ih[i][j] * input[j];
        }
        nn->hidden[i] = relu(nn->z_hidden[i]);
    }

    for (int i = 0; i < OUTPUT_SIZE; i++) {
        nn->z_output[i] = nn->bias_o[i];
        for (int j = 0; j < HIDDEN_SIZE; j++) {
            nn->z_output[i] += nn->weights_ho[i][j] * nn->hidden[j];
        }
        nn->output[i] = nn->z_output[i]; // Linear output
    }
}

/* ---------- Backward Propagation ---------- */
void backward_propagation(
    NeuralNetwork *nn,
    double input[INPUT_SIZE],
    double target[OUTPUT_SIZE]
) {
    double output_error[OUTPUT_SIZE];

    for (int i = 0; i < OUTPUT_SIZE; i++) {
        output_error[i] = 2.0 * (nn->output[i] - target[i]); // MSE gradient
    }

    double hidden_error[HIDDEN_SIZE];
    for (int i = 0; i < HIDDEN_SIZE; i++) {
        hidden_error[i] = 0.0;
        for (int j = 0; j < OUTPUT_SIZE; j++) {
            hidden_error[i] += output_error[j] * nn->weights_ho[j][i];
        }
        hidden_error[i] *= relu_derivative(nn->z_hidden[i]);
    }

    for (int i = 0; i < OUTPUT_SIZE; i++) {
        for (int j = 0; j < HIDDEN_SIZE; j++) {
            nn->weights_ho[i][j] -=
                LEARNING_RATE * output_error[i] * nn->hidden[j];
        }
        nn->bias_o[i] -= LEARNING_RATE * output_error[i];
    }

    for (int i = 0; i < HIDDEN_SIZE; i++) {
        for (int j = 0; j < INPUT_SIZE; j++) {
            nn->weights_ih[i][j] -=
                LEARNING_RATE * hidden_error[i] * input[j];
        }
        nn->bias_h[i] -= LEARNING_RATE * hidden_error[i];
    }
}

/* ---------- Normalization ---------- */
void normalize_inputs(double data[][INPUT_SIZE], int n,
                      double min[], double max[]) {
    for (int j = 0; j < INPUT_SIZE; j++) {
        min[j] = max[j] = data[0][j];
        for (int i = 1; i < n; i++) {
            if (data[i][j] < min[j]) min[j] = data[i][j];
            if (data[i][j] > max[j]) max[j] = data[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < INPUT_SIZE; j++) {
            double range = max[j] - min[j];
            if (range == 0) range = 1.0;
            data[i][j] = (data[i][j] - min[j]) / range;
        }
    }
}

/* ---------- Training ---------- */
void train(NeuralNetwork *nn,
           double inputs[][INPUT_SIZE],
           double targets[][OUTPUT_SIZE],
           int samples) {

    for (int epoch = 0; epoch < EPOCHS; epoch++) {
        double loss = 0.0;

        for (int i = 0; i < samples; i++) {
            forward_propagation(nn, inputs[i]);

            double error = nn->output[0] - targets[i][0];
            loss += error * error;

            backward_propagation(nn, inputs[i], targets[i]);
        }

        if (epoch % 200 == 0) {
            printf("Epoch %d | Loss: %.6f\n", epoch, loss / samples);
        }
    }
}

/* ---------- Main ---------- */
int main() {
    double inputs[][INPUT_SIZE] = {
        {3, 1500, 2.0}, {4, 2000, 1.5}, {2, 1000, 3.0}, {5, 2500, 1.0},
        {3, 1800, 2.5}, {4, 2200, 1.2}, {2, 900, 4.0},  {6, 3000, 0.8}
    };

    double targets[][OUTPUT_SIZE] = {
        {300}, {400}, {200}, {500},
        {350}, {450}, {180}, {600}
    };

    int samples = 8;

    double min[INPUT_SIZE], max[INPUT_SIZE];
    normalize_inputs(inputs, samples, min, max);

    double tmin = targets[0][0], tmax = targets[0][0];
    for (int i = 1; i < samples; i++) {
        if (targets[i][0] < tmin) tmin = targets[i][0];
        if (targets[i][0] > tmax) tmax = targets[i][0];
    }

    for (int i = 0; i < samples; i++) {
        targets[i][0] = (targets[i][0] - tmin) / (tmax - tmin);
    }

    NeuralNetwork nn;
    init_network(&nn);

    printf("\nTraining Neural Network...\n");
    train(&nn, inputs, targets, samples);

    printf("\n=== Predictions ===\n");
    for (int i = 0; i < samples; i++) {
        forward_propagation(&nn, inputs[i]);
        double pred = nn.output[0] * (tmax - tmin) + tmin;
        printf("Sample %d → $%.2fk\n", i + 1, pred);
    }

    double new_house[INPUT_SIZE] = {3, 1600, 1.8};
    for (int j = 0; j < INPUT_SIZE; j++) {
        new_house[j] = (new_house[j] - min[j]) / (max[j] - min[j]);
    }

    forward_propagation(&nn, new_house);
    double prediction = nn.output[0] * (tmax - tmin) + tmin;

    printf("\nNew House Prediction: $%.2fk\n", prediction);
    return 0;
}
