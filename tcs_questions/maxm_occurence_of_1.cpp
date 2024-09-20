
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,max_count=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            max_count=max(max_count,count);
        }else{
            count=0;
        }
    }
    cout<<max_count;
    
    
}