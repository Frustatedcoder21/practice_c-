#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* createLinkedList(int arr[],int index ,int size){
    if(index==size){
        return NULL; // when index becomes equal to size return the next value as NULL
    }
    Node* temp;
    temp=new Node(arr[index]); // create Node and push the value;
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}
int main(){
   int arr[5]={1,2,3,4,5};
   Node* head=createLinkedList(arr,0,5);
  // inserting in middle position of an exisiting LL
   int x=3; // inserting position
   int val=30;
   Node* tempo=head;
   x--;
   while(x--){
       tempo=tempo->next;
   }
   Node* insert=new Node(val);
   insert->next=tempo->next;
   tempo->next=insert;
   
   //for displaying LL
      Node* temp=head;
   while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
   }
}