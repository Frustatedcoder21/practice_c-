// removeLoop from the code
void removeLoop(Node* head) {
        // code here
        // just remove the loop without losing any nodes
        unordered_map<Node*, bool>visited;
        Node* curr=head;
        Node* prev=NULL;
        while(curr){
            if(visited[curr]){
                prev->next=NULL;  // if reaches the same visited node break the loop
                break;
            }else{
                visited[curr]=true;
                prev=curr;
                curr=curr->next;
            }
            
        }
    }