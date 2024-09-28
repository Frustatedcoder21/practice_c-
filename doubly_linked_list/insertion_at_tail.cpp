#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

Node* insertion_at_tail(Node* head ,int data){
    if(head==NULL){ // if Linked list doesn't exists 
        head=new Node(data);
    }else{  // if linked list exists
        Node* curr=head;
        while(curr->next!=NULL){ // traverse to the last node
        curr=curr->next;
        }
        Node* temp=new Node(data);

        temp->next=curr->next;
        temp->prev=curr;
        curr->next=temp;
        
    }
    return head;
}
void display(Node* head){
    Node *curr=head;
    while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
    }
}
int main(){
    Node* head=NULL;
    head= insertion_at_tail(head,5);
   
    head= insertion_at_tail(head,10);
    
    head= insertion_at_tail(head,2);
   
    head= insertion_at_tail(head,8);

    head= insertion_at_tail(head,9);
    
    head= insertion_at_tail(head,13);
  
    head= insertion_at_tail(head,10);
   
    head= insertion_at_tail(head,52);
   
    head= insertion_at_tail(head,57);
    display(head);
}
