#include<iostream>
                        // insert At tail 
using namespace std;   // in this program we are going to learn how to insert a node  in tail in  linkedlist 
class Node{
  public:
  int data;
  Node *next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }

};

void insertAtTail(Node* &tail, int d){ // refernce is used because i does not to make an copy , I wants a changes in original linked List

    //new node create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void print(Node* &tail){   // print the all values 
     Node* temp = tail;     
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     cout<<endl;
}
int main(){
    //creating a new node 
Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1;
print(head);
 

insertAtTail(tail,15);
print(head);

insertAtTail(tail,23);
print(head);

}
