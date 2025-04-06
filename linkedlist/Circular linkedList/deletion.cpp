#include<iostream>

using namespace std;

class Node{
    public:
      int data;
      Node*next;

      Node(int d){
        this->data = d ;
        this->next = NULL;
      }
      ~Node(){
        if(this->next!= NULL){
            delete next;
            next = NULL;

        }cout<<"Memory is free form data "<<this->data <<endl;
      }
};

void insertNode(Node*& tail, int element ,int d){
  // assuming that the element is present in list 

  //for empty list 
    if(tail == NULL){
       Node* temp = new Node(d);
       tail = temp ;
       temp->next =temp;
    }
    else{
      // for non-empty list 
      // assuming that the element is present is the list 
      Node* curr = tail;

      while(curr->data!=element){
        curr =curr->next;

      }
      // element found -> curr is representing element wala node 
      Node* temp = new Node(d);
      temp-> next = curr->next;
      curr->next = temp;
    }
}
void print(Node* tail){
  Node* temp = tail;
 do{
  cout<<tail->data<<" ";
  tail= tail->next;
 } while(tail!= temp);
 cout<<endl;
}

void deleteNode(Node* &tail, int value){
    //empty list 
    if(tail== NULL){
        cout<<"your list is empty, please check again "<<endl;
        return;
    }
    else{  // list is not empty
        Node* prev = tail;
        Node* curr = prev->next; 
        while(curr->data!=value){
            prev =curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(tail==curr){
            tail =prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main(){

  Node* tail = NULL;
  
  // empty list me insert krre hai
  insertNode(tail,5,3);
  print(tail);

  insertNode(tail,3,5);
  print(tail);
  insertNode(tail,5,6);
  print(tail);
  insertNode(tail,5,7);
  print(tail);
  insertNode(tail,3,8);
  print(tail);
  deleteNode(tail, 8);
  print(tail);

}