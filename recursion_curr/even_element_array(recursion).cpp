

#include<iostream>
#include<vector>
using namespace std;

void even_array(vector<int>v,int index,vector<int>&ans){
    if(index==v.size()){
        return;
    }
    if(v[index]%2==0){
        ans.push_back(v[index]);
    }
    even_array(v,index+1,ans);
    
}
int main(){
    vector<int>v={2,6,3,1,4};
    vector<int>ans;
    even_array(v,0,ans);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
   for(int i:ans){
       cout<<i<<" ";
   }
}