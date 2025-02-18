#include<iostream>
using namespace std;                   // In this program we creating  a node of linkedlist 

class Node{
    public: 
    int data;  // data of node 
    Node *next;  // address of next node 

    Node( int data){// constructor
        this->data = data;
        this->next = NULL;
    }

};
  
int main(){
    Node* node1 = new Node(10);   // value given into the node 
    cout<< node1->data<<endl;
    cout<< node1->next<<endl;


}