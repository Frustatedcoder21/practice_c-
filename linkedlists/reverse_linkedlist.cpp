struct Node* reverseList(struct Node* head) {
     Node* curr=head;  
     Node*prev=NULL;
     Node* forward=NULL;
     while(curr){  // run till curr becomes null
         forward=curr->next;  // forward will be one node ahead of curr
         curr->next=prev; // make current node point to previous node
         prev=curr;  // prev becomes current
         curr=forward; // current becomes forwards
     }
     return prev;
    }