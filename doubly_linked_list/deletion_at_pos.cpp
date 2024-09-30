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

Node* delete_at_pos(Node* head,int pos){
if(pos==0){ // if position is zero
    if(head==NULL){  // if there is no node
        return NULL;    // return NULL
    }else{  // if there is more than one node
        Node* temp=head; // create a pointer to head
        head=head->next; // move head ahead
        delete temp;  // delete the previous location
        head->prev=NULL;  // mark new head previous NULL
    }
}
else{ // if position is not zero
        Node* temp=head;  
        while(pos--){  // traverse the position
            temp=temp->next;
        }
        if(temp->next==NULL){  // if the position is last
            temp->prev->next=NULL;  // shift to one node backward and make it next null
            delete temp; // delete the last node
        }else{   // if the position is neither first or last
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete temp;
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
    head=delete_at_pos(head,2);
    display(head);
    cout<<endl;
    head=delete_at_pos(head,2);
    display(head);
    
    
}