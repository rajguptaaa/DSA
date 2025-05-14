#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preOrder(Node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

void postOrder(Node* root){
    if(!root){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(Node* root){
    if(!root){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    
}
int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    inOrder(root);
    return 0;
}