bool isValid(string s) {
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){ // if opening bracket push in the stack
                st.push(s[i]);
            }else{  // if closing bracket
                if(st.empty()){    // if stack is empty return false 
                    return false;
                }else{  // check for the corresponding bracket style whether the bracket is closing or not
           if(st.top()=='(' && s[i]==')'||st.top()=='{' && s[i]=='}'||st.top()=='[' && s[i]==']') 
           {
            st.pop();   // if bracket closes pop it from the stack 
           } else{
            return false;
           }
           }
    }} return st.empty(); // stack is empty then valid paranthesis otherwise not 
    }