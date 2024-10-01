//  merging two sorted lists
 Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* temp1=head1,*temp2=head2;
        Node* head3=NULL;
        Node* temp3;
        while(temp1 && temp2){
            if(temp1->data>temp2->data){
               if(head3==NULL){
                   head3=new Node(temp2->data);
                   temp3=head3;
               } else{
                 Node* temp=new Node(temp2->data);
                   temp3->next=temp;
                   temp3=temp;
               }
               temp2=temp2->next;
            }else{
                if(head3==NULL){
                   head3=new Node(temp1->data);
                   temp3=head3;
               } else{
                 Node* temp=new Node(temp1->data);
                   temp3->next=temp;
                   temp3=temp;
               }
                    temp1=temp1->next;
               }
              
             
        }
        if(temp1){
            temp3->next=temp1;
        }
        if(temp2){
            temp3->next=temp2;
        }
        return head3;
    }