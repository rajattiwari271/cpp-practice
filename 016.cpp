#include <iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node* next ;

    Node (int data){
        this->data = data;
        this->next =NULL;
    }
};


void print(Node* head){
Node* temp = head ;
while ( temp != NULL){
    cout<<temp->data<< " ";
    temp = temp->next;

}
cout<<endl;
}

void removeDuplicates(Node* &head){
    if(head == NULL || head->next == NULL){
        return ;
    }
    Node* curr = head;

    while(curr!= NULL && curr->next != NULL){
        if(curr->data == curr->next->data ){
     Node* temp = curr->next;
     curr->next = curr->next->next;
     temp->next = NULL;
    
          delete temp;
        }
        
        else {
            curr  = curr->next;
      
        }
         
      
    }

}

int main () {

    Node* head = new Node(10);
 Node* second = new Node(20);
    Node* third = new Node(20);
     Node* fourth = new Node(40);
      Node* fifth = new Node(50);
      Node* six = new Node (50);
head -> next = second ;
second ->next = third ;
third -> next = fourth;
fourth -> next = fifth ;
fifth -> next = six;
six->next = NULL;


print(head); 

 removeDuplicates(head);

print(head);
    return 0;
}