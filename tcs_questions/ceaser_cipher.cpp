
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int n=s.size();
   int key;
   cin>>key;
  for(int i=0;i<n;i++){
      if(isdigit(s[i])){  
          if((s[i]+key)<=57){  // for number
              s[i]=s[i]+key;
          }else{
              int left=(s[i]+key)%57;
              s[i]=0+left;
          }
      }else if(s[i]>=65&&s[i]<=90){ // capital letter
          if((s[i]+key)<=90){
              s[i]=s[i]+key;
          }else{
              int left=(s[i]+key)%90;
              s[i]=64+left;
          }
          
      }else if(s[i]>=97 &&s[i]<=122){  //small letter
           if((s[i]+key)<=122){
              s[i]=s[i]+key;
          }else{
              int left=(s[i]+key)%122;
              s[i]=96+left;
          }
          
      }
  }
  cout<<s;
    
}