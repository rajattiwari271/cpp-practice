#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data) {

    Node* newNode = new Node(data);

    newNode->next = head;

    if(head == NULL) {
        tail = newNode;
    }

    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data) {

    Node* newNode = new Node(data);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void print(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* reverse(Node* prev, Node* curr) {

    if(curr == NULL) {
        return prev;
    }

    Node* forward = curr->next;

    curr->next = prev;

    return reverse(curr, forward);
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);

    insertAtTail(head, tail, 67);
    insertAtTail(head, tail, 6);
    insertAtTail(head, tail, 69);
    insertAtTail(head, tail, 66);

    print(head);

    Node* prev = NULL;
    Node* curr = head;

    head = reverse(prev, curr);

    cout << endl;

    print(head);

    return 0;
}