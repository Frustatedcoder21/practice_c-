 //https://www.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1
 
 vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;  //create stack
      
        for(int i=0;i<arr.size();i++){ // traverse array
            if(st.empty()){  // if stack is empty push the element as there is no point of checking the +ve or -ve
                st.push(arr[i]);  
            }else 
                if( arr[i]>=0){   // if element is +ve and top element in stack is positive push  it inside th stack
                 if(st.top()>=0){  
                     st.push(arr[i]);
                 }else{   // if -ve pop it
                     st.pop();
                 }
                } else {    // if array element negative
                    if(st.top()>=0){   // if stack top element is +ve
                        st.pop();  //pop the top element
                    }else{  // if stack top element is -ve
                        st.push(arr[i]);  // push the array element into the stack 
                    }
                }
            
            
        }
        vector<int>temp(st.size());
        for(int i=st.size()-1;i>=0;i--){
            temp[i]=st.top();
            st.pop();
        }
        return temp;
    }