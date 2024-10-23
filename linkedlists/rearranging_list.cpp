// https://www.geeksforgeeks.org/problems/rearrange-a-linked-list/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
void rearrangeEvenOdd(Node *head) {
        Node* even=head->next; // 1 based indexing second node will be even
        Node* odd=head; // 1 based indexing first node will be odd
        Node* temp=head->next;   // storing the even head
        while(even && even->next){
            odd->next=even->next; // make one odd node point to other
            odd=odd->next; // move the odd node
            even->next=odd->next; // make even node point to other
            even=even->next; // move the even node
        }
      odd->next=temp   ; // make the odd last node point to the head of even
     
     
    }