#include <iostream>
using namespace std;

struct Node {
    Node* left;
    char val;
    Node* right;
};

Node* createNode(char data) {
    Node* node = new Node;
    node->val = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}


void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}



int main() {
    Node* root = createNode('A');
    root->left = createNode('B');
    root->left->left = createNode('D');
    root->right = createNode('C');
    root->right->left = createNode('E');
    root->right->left->left = createNode('G');
    root->right->right = createNode('F');
    cout << "Binary tree created successfully" << endl;

    cout << "Preorder traversal is: ";
    preorder(root);
    cout << endl;

    return 0;
}
