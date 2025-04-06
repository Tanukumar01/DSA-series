#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    //construtor
    Node(int data){
        this->data =data;
        this->next = NULL;
    }
     
};
void insertAtHead(Node* &head, int d){
     //creating a  new node 
     Node* temp = new Node(d);
     temp->next = head;
     head = temp ;
}

void print(Node* &tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail,int d){
    
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void inserAtPosition(Node* &head, int position, int d){
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;

    }
    Node* nodeToinsert = new  Node(d);
       nodeToinsert->next = temp->next;
       temp->next = nodeToinsert;
    
}
int main(){
    Node* node1 = new Node(12);
    Node* head =  node1;
    Node* tail =  node1;
    print(head);
    
    insertAtTail(tail,22);
    print(head);
    insertAtTail(tail,23);
    print(head);
    inserAtPosition(head,2,29);
    print(head);
    
}
