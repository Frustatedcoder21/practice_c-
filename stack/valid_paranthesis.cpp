#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){  // traverse string
        if(s[i]=='('){  // if it is opening bracket push it inside the stack
            st.push(s[i]);
        }else{ // if closing bracket
            if(st.empty()){ // if stack is empty return false
                return false;
            }else{  // else for every adjacent closing bracket pop out the opening bracket
                st.pop();
            }
        }
    }
    return st.empty();
}
int main(){
    string s="()(())";
    cout<<isValid(s);
}