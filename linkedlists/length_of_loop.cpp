// counting the lenght of loop
  int countNodesinLoop(Node *head) {
        Node* slow=head,*fast=head; 
        while(fast!=NULL && fast->next!=NULL){ 
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){ //checking whether loop exists or not
                break;  // if exists break
            }
        }
        if(fast==NULL || fast->next==NULL){ //if loop doesn't exists then the length of loop=0
            return 0;
        }
        int count=1;  
        slow=fast->next; // make the slow pointer next to fast , that's why we are taking count 1
        while(fast!=slow){  // counting the loop 
            count++;
            slow=slow->next;
        }
        return count ;
        
        // Code here
    }