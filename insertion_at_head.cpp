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
Node* insertion_at_head(Node* head ,int data){
    if(head==NULL){ // if Linked list doesn't exists 
        head=new Node(data);
    }else{  // if linked list exists
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
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
    head= insertion_at_head(head,5);
   
    head= insertion_at_head(head,10);
    
    head= insertion_at_head(head,2);
   
    head= insertion_at_head(head,8);

    head= insertion_at_head(head,9);
    
    head= insertion_at_head(head,13);
  
    head= insertion_at_head(head,10);
   
    head= insertion_at_head(head,52);
   
    head= insertion_at_head(head,57);
    display(head);
}
