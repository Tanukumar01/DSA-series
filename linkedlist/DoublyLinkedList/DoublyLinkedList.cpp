#include<iostream>
                          /* in this program the creation of doubly linkedlist and 
                           insertionAtHead is covered */
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

// traversing a doubly linked list
void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// give length of linked list 
int getLength(Node* head){
    int len = 0;
    Node* temp =  head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// insert at head 
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

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<<getLength(head)<<endl;
    
    insertAtHead(head,11);
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,13);
    print(head);


    insertAtTail(tail, 12);
    print(head);

    return 0;
    
}