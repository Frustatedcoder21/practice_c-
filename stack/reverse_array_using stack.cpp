#include<iostream>
#include<stack>
using namespace std;
  
  int main(){
    int arr[5]={1,4,3,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    stack<int>s;
    for(int i=0;i<size;i++){
        s.push(arr[i]);
    }
    int i=0;
    while (!s.empty())
    {
        arr[i]=s.top();
        i++;
        s.pop();
    }
    for(int j=0;j<size;j++){
        cout<<arr[j];
    }
    
  }