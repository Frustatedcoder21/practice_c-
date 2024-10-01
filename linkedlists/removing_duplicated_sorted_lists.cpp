// remove duplicates from sorted array
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
    
};
Node* insert_at_tail(Node* head,int data){
    
    Node* tail;
    if(head==NULL){
        head=new Node(data);
        tail=head;
       
    }else{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
    
    }
    return head;
    
}
Node* remove_duplicate(Node* head){
   Node* prev=head,*curr=head->next;
   while(curr){  // till the curr exists
       if(prev->data==curr->data){  // if data is same
       prev->next=curr->next; // make the previous node point to the node ahead of curr
       delete curr; // delete the current node
       curr=prev->next;  // now make the current point to the node next to previous
    }else{ // if not same data move ahead prev and curr pointer
        prev=prev->next; 
        curr=curr->next;
    }
       
   }
   return head;
    
}
void display(Node* head){
    Node* temp=head;
  
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    head=insert_at_tail(head,2);
     head=insert_at_tail(head,2);
      head=insert_at_tail(head,2); 
      head=insert_at_tail(head,4);
        head=insert_at_tail(head,4);
      display(head);
      cout<<endl;
      head=remove_duplicate(head);
      display(head);
    
}