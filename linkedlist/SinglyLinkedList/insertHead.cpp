#include<iostream>

using namespace std;   // in this program we are going to learn how to insert a node in linkedlist 
class Node{
  public:
  int data;
  Node *next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }

};

void insertAtHead(Node* &head, int d){ // refernce is used because i does not to make an copy , I wants a changes in original linked List

    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp ;
}
void print(Node* &head){   // print the all values 
     Node* temp = head;     
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     cout<<endl;
}
int main(){
    //creating a new node 
    Node* node1 = new Node(10);
//     Node* node2 = new Node(23);
//     node1->next = node2;
//     cout<<node1->data<<endl;
//     cout<<node1->next<<endl;
//     cout<<node2->data<<endl;
//     cout<<node2->next<<endl;
 Node* head = node1;
 print(head);

insertAtHead(head,15);
print(head);

insertAtHead(head,23);
print(head);

}
