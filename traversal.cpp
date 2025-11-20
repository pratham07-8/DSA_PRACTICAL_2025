//17. Preorder, Inorder, Postorder Traversal
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

Node* newNode(int x){
    Node* t = new Node;
    t->data = x;
    t->left = t->right = NULL;
    return t;
}

void preorder(Node* root){
    if(root){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node* root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main(){
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    cout << "Preorder: "; preorder(root);
    cout << "\nInorder: "; inorder(root);
    cout << "\nPostorder: "; postorder(root);
}

