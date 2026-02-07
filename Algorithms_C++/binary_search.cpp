#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Insert a value into the BST
Node* insert(Node* root, int val) {
    if (!root) return new Node(val); // empty spot, create node

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);
    // else: duplicate, do nothing
    return root;
}

// In-order traversal (sorted)
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Search in BST
bool search(Node* root, int val) {
    if (!root) return false;
    if (root->data == val) return true;
    if (val < root->data) return search(root->left, val);
    return search(root->right, val);
}

int main() {
    Node* root = nullptr;

    // Insert some numbers
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "BST in-order (sorted): ";
    inorder(root);
    cout << endl;

    int x;
    cout << "Enter number to search: ";
    cin >> x;

    if (search(root, x))
        cout << x << " found in BST!\n";
    else
        cout << x << " not found in BST!\n";

    return 0;
}
