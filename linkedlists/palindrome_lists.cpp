bool isPalindrome(ListNode* head) {
     
        // taking out the mid of the list
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
         }
         // reversing the second half
         ListNode* curr=slow;
         ListNode* prev=NULL;
         ListNode* fut=NULL;
         while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
         }
         // now traversing till the end of the two list
        ListNode* firsthalf=head;
         ListNode* secondhalf=prev; // prev is second half head
         while( secondhalf!=NULL ){
            if(firsthalf->val!=secondhalf->val){
                return false;
            }
            firsthalf=firsthalf->next;
            secondhalf=secondhalf->next;
         }
         return true;
    }