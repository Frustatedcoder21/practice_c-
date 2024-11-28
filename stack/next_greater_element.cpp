#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void next_greater_ele(vector<int>v,vector<int>&ans){
stack<int>st;
for(int i=0;i<v.size();i++){
  
        while(!st.empty() && v[st.top()]<v[i]){  // if stack if not empty and the element of array is greater than top element of stack 
            ans[st.top()]=v[i];   // then  we will push the greater element into the indices of the top element in ans array
            st.pop();  // pop that indices
        }
        st.push(i);   // if empty or smaller pushed the element in stack 
    }

}
int main(){
vector<int>v={2,1,4,6,4,3};
vector<int>ans(v.size(),-1);
next_greater_ele(v,ans);
for(auto it: ans){
    cout<<it<<" ";
}
}