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

    ~Node() {
        cout << "Node with value " << this->data << " deleted" << endl;
    }
};

// Find length
int findLength(Node* head) {
    int len = 0;

    Node* temp = head;

    while (temp != NULL) {
        len++;
        temp = temp->next;
    }

    return len;
}

// Insert at Head
void insertAtHead(Node*& head, Node*& tail, int data) {

    Node* newNode = new Node(data);

    newNode->next = head;

    if (head == NULL) {
        tail = newNode;
    }

    head = newNode;
}

// Insert at Tail
void insertAtTail(Node*& head, Node*& tail, int data) {

    Node* newNode = new Node(data);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Insert at Position
void insertAtPosition(int data, int position,
                      Node*& head, Node*& tail) {

    // Empty list
    if (head == NULL) {

        if (position != 1) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* newNode = new Node(data);

        head = newNode;
        tail = newNode;

        return;
    }

    // Position 1
    if (position == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLength(head);

    if (position < 1 || position > len + 1) {
        cout << "Invalid position" << endl;
        return;
    }

    // Insert at tail
    if (position == len + 1) {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;

    Node* prev = head;

    while (i < position - 1) {
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;

    Node* newNode = new Node(data);

    newNode->next = curr;
    prev->next = newNode;
}

// Delete Node
void deleteNode(int position, Node*& head, Node*& tail) {

    if (head == NULL) {
        cout << "Cannot delete. List is empty." << endl;
        return;
    }

    int len = findLength(head);

    if (position < 1 || position > len) {
        cout << "Invalid position" << endl;
        return;
    }

    // Delete first node
    if (position == 1) {

        Node* temp = head;

        head = head->next;

        temp->next = NULL;

        delete temp;

        // List became empty
        if (head == NULL) {
            tail = NULL;
        }

        return;
    }

    // Delete last node
    if (position == len) {

        Node* prev = head;

        int i = 1;

        while (i < position - 1) {
            prev = prev->next;
            i++;
        }

        Node* temp = tail;

        prev->next = NULL;
        tail = prev;

        delete temp;

        return;
    }

    // Delete middle node
    int i = 1;

    Node* prev = head;

    while (i < position - 1) {
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;

    prev->next = curr->next;

    curr->next = NULL;

    delete curr;
}

// Print linked list
void print(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    cout << "\nAfter deleting position 1:\n";

    deleteNode(2, head, tail);

    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}