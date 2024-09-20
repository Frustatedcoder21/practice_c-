
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{  
    int testcase;
    cin>>testcase;
    for(int i=1;i<=testcase;i++){
        int n;
        cout<<endl<<"Enter the size"<<endl;
        cin>>n;
        int arr[1000]={0};
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int minm=arr[0],maxm=arr[0];
        for(int k=1;k<n;k++){
            minm=min(minm,arr[k]);
            maxm=max(maxm,arr[k]);
        }
        cout<<"Smallest Element:"<<minm;
        cout<<"Largest Element:"<<maxm;
    }
}