#include<bits/stdc++.h>
using namespace std;

//  Definition of Binary tree node 
struct Node{
    int data;
    Node *left;
    Node *right;


    Node(int val){
        data = val;
        left = right = NULL;
    }
};

//preorder traversal root -> left -> right

void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";   // Process the root node 
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main(){
    // Creating a simple binary tree 
  Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->right->right = new Node(5);

   cout<<"Preorder Traversal of Binary Tree: ";
   preorderTraversal(root);
   cout<<endl; 
}
