#include<iostream>
using namespace std;

//  Definition of Binary Tree Node 
struct Node{
    
    int data;
    Node *left;
    Node *right;
    
    Node(int val){
       data = val;
       left = right = NULL;
    }

};

// postOrder Traversal 

void postOrder(Node* root){
    
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(10);
    root->right->right = new Node(20);

    cout<<"The PostOrder Traversal of Binary tree is : ";
    postOrder(root);
    cout<<endl;
}