#include <stdio.h>
#include "bubble_sort.h"

int main(){

    int num_array[] =  {1,9,3,5,6,7,8,2,4}; // array of 9 numbers to be sorted
    int array_size = sizeof(num_array)/sizeof(num_array[0]); //calculates the size of the array

    //Bubble Sort Algorithm
    for(int i = 0; i < array_size-1; i++){
        for(int j = 0; j < array_size-i-1; j++){
            if(num_array[j] > num_array[j+1]){
                //swapping elements
                int temp = num_array[j];
                num_array[j] = num_array[j+1];
                num_array[j+1] = temp;
            }
        }
    }

    //Printing the sorted array
    printf("Sorted array: ");
    for(int i = 0; i < array_size; i++){
        printf("%d ", num_array[i]);
    }
    return 0;

}