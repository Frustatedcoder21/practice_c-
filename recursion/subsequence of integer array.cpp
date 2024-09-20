// subsequence of integer array *;
#include <bits/stdc++.h>
using namespace std;
void subsequences( int index,int n, int arr[], vector<int>&ans)
{ 
    if(index==n)
    {   for(auto it:ans)      
         {cout<<it;}
         cout<<endl;
           return ;
    }
    ans.push_back(arr[index]);
    subsequences(index+1,n,arr,ans);
    ans.pop_back();
    subsequences(index+1,n,arr,ans);
}

int main()
{  int arr[5]={1,2,3,4,5};
    vector<int>ans;
    
    
    subsequences(0,5,arr,ans);
    
}