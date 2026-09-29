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
Node* getMiddle(Node* & head){
if ( head == NULL){
    cout<<"LL is empty"<<endl;
    return head;
}
if(head->next==NULL){
    return head;
}
Node* slow = head;
Node* fast = head;
while(slow!= NULL && fast != NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
}
return slow;
}

int getLength(Node* head ){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp ->next;
        len ++;
    }
    return len;
}

Node* reverseKNodes(Node* head,int k){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int length = getLength(head);
    if(k>length){
        cout<<"Enter Valid value for k"<<endl;
        return head;
    }

    Node * prev = NULL;
    Node* curr = head ;
    Node* forward = curr->next;
    int count = 0;
    while (count<k){
        forward = curr -> next ; 
        curr -> next = prev ;
        prev = curr ;
        curr = forward ;
        count ++;
    }
    if (forward!= NULL){
        head-> next = reverseKNodes(forward,k);
    }
    return prev;
}

int main () {

    Node* head = new Node(10);
 Node* second = new Node(20);
    Node* third = new Node(30);
     Node* fourth = new Node(40);
      Node* fifth = new Node(50);
      Node* six = new Node (60);
head -> next = second ;
second ->next = third ;
third -> next = fourth;
fourth -> next = fifth ;
fifth -> next = six;
six->next = NULL;

print(head);

head = reverseKNodes(head,3);
print(head); 

// cout<<getMiddle(head)->data<<" ";
    return 0;
}