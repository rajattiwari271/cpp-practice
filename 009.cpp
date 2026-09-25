#include <iostream>
#include <string>
#include <list>
using namespace std;

class Node{
    public: 
    int data ;
    Node* next;
    Node() {
        this->data = 0 ;
        this->next = NULL;
    }
    Node (int data ){
        this->data = data; 
        this->next = NULL;
    }
};

void insertAtHead (Node* &head ,Node* &tail,int data ){
    Node* newNode = new Node(data);
    newNode ->next = head ;
    if(head == NULL){
        tail = newNode;
    }
    head = newNode ;        
}

void insertAtTail(Node* &head,Node* &tail ,int data){
    Node* newNode = new Node(data);
    tail -> next = newNode;
    if(head == NULL){
        head = newNode;
    }
    tail = newNode;
}

void insertAtPosition(int data,int position ,Node* &head, Node* &tail){
if(head == NULL ){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode ;
    return;
}
int i = 1; 
Node* prev = head ;
while(i<position ){
    prev = prev ->next ;
    i++;
}
Node* curr = prev ->next;
Node* newNode = new Node(data);
newNode -> next = curr;
prev -> next = newNode;
}

void print(Node* & head){
      Node* temp = head;
      while(temp != NULL ){
        cout<<temp->data<< " ";
        temp = temp ->next ;
      }
}


int main () {
    Node* head = NULL;

    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
   

  
    insertAtTail(head,tail,66);

    print(head);
      cout<<endl;

    cout<<"Head: "<< head ->data<<endl;
     cout<<"tail: "<< tail ->data<<endl;

    cout<<endl;
 insertAtPosition(101,4,head,tail);
 print(head);
    

    return 0;
}