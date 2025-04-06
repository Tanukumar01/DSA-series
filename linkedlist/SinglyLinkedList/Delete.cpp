#include<iostream>

using namespace std;

class Node{
    public:
    int data ;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
    ~Node(){
        int value = this-> data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for Node with Data "<<value<<endl;
    }
};

void insertAthead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp ;

}
void deleteNode(int position, Node* & head){
    //deleting first or start node
    if(position ==1){
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
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;

        }
        prev->next = curr->next; // deleting last node 
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
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    
    insertAthead(head, 20);
    print(head);
    insertAthead(head,30);
    print(head);
    insertAthead(head,40);
    print(head);
    deleteNode(3,head);
    print(head);
}
