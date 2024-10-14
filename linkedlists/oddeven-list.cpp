ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head; // if no node or one node exists
        ListNode* odd=head;  // first node odd
        ListNode *even=head->next; // even node is node next to head
        ListNode* evenHead=even;
        
       while(even!=NULL && even->next!=NULL){
          odd->next=odd->next->next;  // make odd point to the next odd  node
          even->next=even->next->next;   // make even node point to the next even node
          odd=odd->next;  // move odd node ahead 
         even=even->next;  // move even node ahead 
       }
       odd->next=evenHead; // odd last node should be pointed even's head node
       return head;
    }