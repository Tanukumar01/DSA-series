#include<iostream>

using namespace std;   // in this program we are going to learn how to insert a node in linkedlist at desire position 
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

void insertAtPosition(Node* &head, int position, int d){
   
    if(position==1){  // when you want to insert at 1st position
        insertAtHead(head,d);
        return;
    }
   
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;

    }
    // Creating a node For d
    Node* nodeToinsert = new Node(d);

    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;


}

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
insertAtPosition(head,1,22);
print(head);

}
