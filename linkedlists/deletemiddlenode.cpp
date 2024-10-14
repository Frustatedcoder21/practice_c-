 ListNode* deleteMiddle(ListNode* head) {
        if(!head)return NULL; // if no node return null
        if(head->next==NULL){  // if single node delete that node return null
            delete head;
            return NULL;
        }
        ListNode* slow=head;  // slow
        ListNode* fast=head; // fast
        while(fast && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //slow is the middle node
        ListNode* temp=head;
        while(temp->next!=slow){  // go to  one node before the middle node
            temp=temp->next;
        }
        temp->next=slow->next;  // make one node before middle node point to the one node after the middle node skipping the middle node
        delete slow; // delete the middle node
        return head;
    }