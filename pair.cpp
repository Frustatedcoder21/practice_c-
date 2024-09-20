
#include <bits/stdc++.h>
using namespace std;
bool cmpr(pair<int,int>v1,pair<int,int>v2){
    return v1.first>v2.first;
}
int main()
{ int arr[5]={2,4,1,3,6};
  vector<pair<int,int>>v;
  for(int i=0;i<5;i++){
     v.push_back(make_pair(arr[i],i));
  }
  sort(v.begin(),v.end(),cmpr);
  for(auto it:v)
  cout<<it.second;
  
   
}