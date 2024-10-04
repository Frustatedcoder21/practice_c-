// y shaped linked list intersect Point
 int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
       Node* temp1=head1,*temp2=head2;  // two temporary node to traverse two heads
       int count1=0,count2=0; // for counting nodes in each list
       while(temp1){ // for list 1
           count1++;
           temp1=temp1->next;
       } 
       while(temp2){  // for list 2
           count2++;
           temp2=temp2->next;
       }
       temp1=head1,temp2=head2;  // again make them point at head 
       // to make them made intersect two node at same point first take out the difference of nodes between two list
       while(count1>count2){   // if numbers of nodes is more in list1
           count1--;  // traverse the node to reach the equal number of nodes in the each list
           temp1=temp1->next;
       }
       while(count2>count1){  // if number of nodes is more in list2
           count2--;
       temp2=temp2->next;
           
       }
       while(temp1!=temp2){ //if temp1 is not equal to temp2
          temp1=temp1->next;
          temp2=temp2->next;
       }
       return temp1->data; // return the temp value 
       
    }