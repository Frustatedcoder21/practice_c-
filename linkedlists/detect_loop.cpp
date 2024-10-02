// solved using vector
/*
bool check(vector<Node*>&visited,Node* address){ // function created for checking the address aare visited or not

for(int i=0;i<visited.size();i++){
    if(visited[i]==address){
        return 1;
    }
    return 0;
}
    
}

bool detect_loop(Node* head){ // this function detect_loop
    Node* temp=head; 
    vector<Node*>visited; // vector to keep record of the address visited
    while(temp!=NULL){ // if the loop doesn't exists it will end after traversing last node
        if(check(visited,temp)){   // if loop exists then it will return from here
            return 1;
        }
        visited.push_back(temp); 
        temp=temp->next;
    }
    return 0;
}
*/
//solved using unordered_map
bool detect_loop(Node* head){
    Node* temp=head;
    unordered_map<Node*,int>visited; // unordered_map 
    while(temp!=NULL){
        if(visited[temp]){  // if visited return
            return 1;
        }
        visited[temp]=1;  // if not visited earlier mark it visited
        temp=temp->next;
    }
    return 0;
}

