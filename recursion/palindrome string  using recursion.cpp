//palindrome string  using recursion
#include<iostream>
using namespace std;
bool reverse(string& arr,int s,int e)
{  
    if(e<s)
    { return  false;
        
    }
    if(arr[e]==arr[s])
    { return true ;}
    s++;
    e--;
   return  reverse(arr,s,e);
    
}
int main(){
    string arr="MALAYALAM";
  bool ans= reverse(arr,0,arr.length()-1);
    if(ans)
    {cout<<"true";
        
    } else
    {cout<<"false"; }
}