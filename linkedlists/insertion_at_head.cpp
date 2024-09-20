// inserting node from the head of linked_list
#include <iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
    Node(int data){ // constructor to initialise the node
        this->data=data;
        next=NULL; // every time new node will be created it will point to null;
    }
    
};
void disp(Node* head){  // function display or traversing the linked list
 Node* temp=head; 
 while(temp!=NULL){  // print till the temp reaches the end
     cout<<temp->data<<" ";
     temp=temp->next; // moving forward to each node
 }
}
int main()
{   int arr[5]={2,1,6,4,5};
    Node* head;
    head=NULL; // at first head should point to null
    for(int i=0;i<5;i++){
        if(head==NULL){    // means that if head is point to null then first node will be created
            head= new Node(arr[i]); // and head will be made to point the first node
        }else{   // if the node already exists
            Node* temp= new Node(arr[i]); // create the node to be inserted
            temp->next=head; //made the new node point at the head of the linked list
            head=temp; //move head at the front most node
        }
    }
    disp(head); // function call to display the linked list
    
}