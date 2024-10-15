 stack<int> insertAtBottom(stack<int> st,int x){
        vector<int>v;
    
        
        while(!st.empty()){  // first push all the element from stack into vector
            v.push_back(st.top());
          
            st.pop();
        }
            v.push_back(x); // then push the element to be inserted at the bottom
        int j=v.size()-1;
        
        while(j>=0){  // now push the element into stack in reverse order of vector
            st.push(v[j]);
            j--;
        }
        return st;
    }