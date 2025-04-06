#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
   //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    //distructor
    ~Node(){
        int val = this->data;
        if(next!=NULL){
          delete next;
          next = NULL;
        }
        cout<<"memory free node with data "<<val<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void deleteNode(Node* &head, int position){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;

        } 
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    insertAtHead(head, 13);
    print(head);

    insertAtHead(head, 14);
    print(head);

    insertAtHead(head, 15);
    print(head);

    deleteNode(head, 3 );
    print(head);
    return 0;
}