#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    

     //constructor  
     Node(int d ){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};


void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head , int d ){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}


void insertAtTail(Node* &tail, int d ){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPostion(Node* &tail, Node* &head,int d, int position){
    
    if(position==1){          // for position 1
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt =1;
    while(cnt<position-1){        
       temp = temp->next;
       cnt++;
    }
    if(temp->next==NULL){       // for last position 
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d to insert
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

   
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,11);
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 14);
    print(head);
    
    insertAtTail(tail, 12);
    print(head);
    insertAtPostion(tail,head,100,4); // function call of InsertAtPosition
    print(head);
}