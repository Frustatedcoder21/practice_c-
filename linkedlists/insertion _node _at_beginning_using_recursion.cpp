// insertion of node at the beginning using recursion
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
Node* createLinkedList(int arr[],int index ,int size, Node*prev){
    if(index==size){
        return prev; // when index becomes the size of array return the the prev which is equal to temp value
    }
    Node* temp;
    temp=new Node(arr[index]); // create Node and push the value;
    temp->next=prev;  // element inserted at the beginning of the head will point to the prev element
    return createLinkedList(arr,index+1,size,temp);
}
int main(){
   int arr[5]={1,2,3,4,5};
   Node* head=createLinkedList(arr,0,5,NULL); // the first element or initial head node will point to NULL
   Node* temp=head;
   while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
   }
}