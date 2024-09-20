//reverse string  using recursion
#include<iostream>
using namespace std;
void reverse(string& arr,int s,int e)
{  
    if(e<s)
    { return ;
        
    }
    swap(arr[s],arr[e]);
    s++;
    e--;
    reverse(arr,s,e);
    
}
int main(){
    string arr="MAYANK";
    reverse(arr,0,arr.length()-1);
    cout<<arr;
}