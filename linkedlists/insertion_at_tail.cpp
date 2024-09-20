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
int main(){
    Node* head=NULL;
    Node* tail; // this node is made to keep track of the last element of LL
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){   // if there is no head create a head
            head=new Node(arr[i]);
            tail=head; // for the first element head and tail pointer will be same
        }else{
            Node* temp=new Node(arr[i]);
            tail->next=temp;
            tail=temp;
        }
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}