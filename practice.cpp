#include<iostream>
using namespace std;
struct Node
{
    Node *left;
    char value;
    Node *right;

};
Node *createnode(char data){
    Node *newnode = new Node;
    newnode -> left = nullptr;
    newnode -> right= nullptr;
    newnode -> value = data;
    return newnode;
}
void Preorder(Node *root){
    if(root == nullptr){
        return;
    }
    cout<<root->value<<" ";
    Preorder(root -> left);
    Preorder(root -> right);
}
void Inorder(Node *root){
    if(root == nullptr){
        return;
    }
    Inorder(root -> left);
    cout<<root->value<<" ";
    Inorder(root -> right);
}
void postorder(Node *root){
    if(root == nullptr){
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root->value<<" ";
}
int main(){
    Node *root = createnode('A');
    root -> left = createnode('B');
    root -> right = createnode('C');
    Preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    Inorder(root);
    return 0;
}