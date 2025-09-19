/* #include<iostream>

using namespace  std;

class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtTail(Node* &tail, int d){
   // create new node 
   Node* temp = new Node(d);
   tail->next = temp;
   tail = tail->next;
}
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d); // create new node
    temp -> next = head;
    head = temp;
}
void print(Node* &head){ //pritn the linkedList
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(8);
   
   //head pointed to node1
   Node* head = node1;
   Node* tail = node1;
   print(head);

   insertAtTail(tail,13);
   print(head);

   insertAtTail(tail,14);
   print(head);
   return 0;
}
*/

/*
#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }

};
void insertAtHead(Node* &head, int d){ // insert at head
    Node* temp = new Node(d);  // create new node
    temp->next = head;
    head = temp;
}


void insertAtPosition(Node* &head,int position, int d){


    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    //create a new node for d 
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    
}

void deleteAtPosition(Node* head,int position){
    if(position==1){
        Node* temp = head;
        head = head->next;
        //memory free start node
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting an middle node or last node 
       Node* curr = head;
       Node* prev = NULL;

       int cnt = 1;
       while(cnt<position){
        prev = curr;
        curr = curr->next;
        cnt++;
       }
       prev->next = curr->next;
       curr->next = NULL;
       delete curr;
        
    }
}
void print(Node* &head){
Node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
cout<<endl;
}

int main(){
//create new node 
Node* node1 =  new Node(10);
Node* head  = node1;
print(head);


insertAtHead(head,12);
print(head);

insertAtHead(head,13);
print(head);

insertAtHead(head,14);
print(head);


insertAtPosition(head,1,22);
print(head);
cout<<endl;
deleteAtPosition(head,3);
print(head);
return 0;
}
*/

//this is double linked list code 

#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;

    }
};

int getLength(Node* &head){  // it find the length of node 
    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;  
    }
    return len;
}
void insertAtHead(Node* &head, int d){
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
    }else{

         Node* temp = new Node(d);
        temp->next = head;
        head->prev =temp;
        head = temp;
     }
   
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail->prev = tail;
    tail = temp;
}
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    
    //for position 1
    if(position==1){
       insertAtHead(head,d);
       return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){ // for Last position
      insertAtTail(tail,d);
      return;
    }
    //creating node for d to insert 
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}

int main(){
  Node* node1 = new Node(12);
  Node* head = node1;
  Node* tail = node1;
  print(node1);
  cout<<getLength(head)<<endl;
  insertAtHead(head,10);
  insertAtHead(head,20);
  insertAtTail(tail,23);
  insertAtPosition(tail,head,2,19);
  print(head);
}