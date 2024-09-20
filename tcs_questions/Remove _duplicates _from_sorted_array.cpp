
#include <iostream>
#include<vector>

using namespace std;

int main()
{ 
  vector<int>v;
  int size;
  cin>>size;
 
  for(int i=0;i<size;i++){
      int ele;
      cin>>ele;
      v.push_back(ele);
      
  }
  vector<int>ans;
  ans.push_back(v[0]);
  for(int i=0;i<size-1;i++){
      if(v[i]!=v[i+1]){
          ans.push_back(v[i+1]);
      }
  }
  if(v[size-2]!=v[size-1]){
          ans.push_back(v[size-1]);
      }
      for(int i=0;i<ans.size();i++){
          cout<<ans[i];
      }
  
  
  }
  
  
    

