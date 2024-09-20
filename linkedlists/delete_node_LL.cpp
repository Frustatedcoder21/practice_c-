#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
     Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node* insert_at_head(Node* head,int arr[]){
    for(int i=0;i<4;i++){
   if(head==NULL){
   head=new Node(arr[i]);
   }else{
       Node* temp=new Node(arr[i]);
       temp->next=head;
       head=temp;
   }
    }
    return head;
}
Node* insert_at_tail(Node* head,int arr[]){
    Node* tail=NULL;
    for(int i=0;i<4;i++){
   if(head==NULL){
   head=new Node(arr[i]);
   tail=head;
   }else{
       Node* temp=new Node(arr[i]);
       tail->next=temp;
       tail=temp;
   }
    }
    return head;
}
Node* insert_at_pos(Node* head ,int pos , int value){
    Node* temp=head;
    pos--;
    while(pos--){
    
        temp=temp->next;
    }
    Node* temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;
    
 return head;
}
void display(Node* head){
  Node* temp=head;
  while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
  }
  cout<<endl;
  
}
Node* deletion(Node* head, int pos){
   if(pos==1){
       Node* temp=head;
       head=head->next;
       delete temp;
       return head;
   } 
   pos--;
   Node* curr=head;
   Node *prev=NULL;
   while(pos--){
       prev=curr;
       curr=curr->next;
   }
   if(curr==NULL){  // if position is greater then length of list
     cout<<"Out of Bound";
     return head;
   }
   prev->next=curr->next;
   delete curr;
   return  head;
   
   
}


int main(){
    Node * head=NULL;
    int arr[4]={2,1,3,4};
//   head= insert_at_head(head,arr);
//     display(head);
    head=insert_at_tail(head,arr);
    display(head);
    head=insert_at_pos(head,2,30);
    display(head);
    head=deletion( head,1);
    display(head);
    
    
}