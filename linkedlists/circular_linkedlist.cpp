// implementation of circular node
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
   
    if(head==NULL){ // if there is not node present in the list
        head=new Node(data); //create a head node
        head->next=head;  // make the head pointer point to itself
 
    }else{
      Node* temp= head; //make a temporary node for traversing 
      while(temp->next!=head){ // reach last node , last node will be pointing to head
      temp=temp->next;  //traverse forward
      }
      Node* newNode=new Node(data); //create a new node
      temp->next=newNode; // make the last node point to the new node
      newNode->next=head; // and make last node point to head
      }
    return head;
}
void display(Node* head)
{   
    Node* temp=head;
    cout<<temp->data<<" ";  // print the head first
    temp=temp->next;   // then move forward
    while(temp!=head){  //now move till the last 
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
    Node* head=NULL ;
    head=insert_at_tail(head,10);
    head=insert_at_tail(head,20);
     head=insert_at_tail(head,40);
      head=insert_at_tail(head,120); 
      head=insert_at_tail(head,220);
      head=insert_at_tail(head,270);
    display(head);
    
}