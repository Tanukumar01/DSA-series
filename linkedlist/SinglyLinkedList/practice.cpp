#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, int position, int d) {
    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

bool isCircularLinkedList(Node* head) {
    if (head == NULL) {
        return true;
    }

    Node* temp = head->next;
    while (temp != NULL && temp != head) {
        temp = temp->next;
    }

    return temp == head;
}
Node* floyedDetection(Node* head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return slow; // Cycle detected
        }
    }

    return NULL; // No cycle
}
Node* startingNode(Node* head){
    Node* intersection = floyedDetection(head);
    Node* start = head;
    if(intersection==NULL){
        return NULL;
    }
    while(start!=intersection){
        start = start->next;
        intersection = intersection->next;
    }
    return start;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    print(head);
    tail->next = head;


    // Make the list circular (optional for testing)
    // tail->next = head;

    if (isCircularLinkedList(head)) {
        cout << "Linked list is Circular in nature" << endl;
    } else {
        cout << "List is not circular" << endl;
    }
    if(floyedDetection(head)){
        cout<<"loop present ";
        Node* loopStart = startingNode(head);
        if(loopStart){
            cout<<"starting Node is "<<loopStart->data;
        }
    }else{
        cout<<"loop not present";
    }
   
    return 0;
}
