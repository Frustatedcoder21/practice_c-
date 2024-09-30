// converting array to linked list using recursion
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};


Node* insert_at_tail(int arr[],int index,Node* back,int size){
    if(index==size){ // if reaches the last index of array return null for temp->next
        return NULL;
    }
    Node* temp; // else create the new node
    temp=new Node(arr[index]);
    temp->prev=back;  // here the back is one previous node
    temp->next=insert_at_tail(arr,index+1,temp,size); // the value returned and save it temp->next;
    return temp; // the returned value 
}

Node* delete_at_tail(Node* head){
   if(head){
      if(head->next==NULL){ // if single node exists
          delete head;
          return NULL;
      }else{  // if more node exists
          Node* temp =head; 
          while(temp->next!=NULL){  // reach till last node
              temp=temp->next;
          }
          temp->prev->next=NULL;  // make the second last node next NULL
          delete temp;  // now delete the last node
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
    int arr[4]={1,2,3,4};
    head=insert_at_tail(arr,0,NULL,4);
    display(head);
    cout<<endl;
    head=delete_at_tail(head);
    display(head);
    
    
}