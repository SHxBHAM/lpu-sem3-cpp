#include<iostream>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    char value;
};

Node *createNode(char data){
    Node *newnode = new Node;
    newnode ->left = newnode->right = nullptr;
    newnode ->value = data;
    return newnode;
}
void preorder(Node *root){
    if(root == nullptr){
        return;
    }
    cout<<root->value<<" ";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(Node *root){
    if(root == nullptr){
        return;
    }
    
    Inorder(root->left);
    cout<<root->value<<" ";
    Inorder(root->right);
}
void postorder(Node *root){
    if(root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->value<<" ";
}
int main(){
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
}