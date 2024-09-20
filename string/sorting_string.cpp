#include <iostream>
#include<vector>
using namespace std;


int main() {
    string s = "acsgkwop"; 
    vector<int>v(26,0) ;  // vector to store the frequency
    for(int i=0;i<s.size();i++){
        
     v[s[i]-'a']++;   // updating the frequency 
  
    }
    string ans; // string to store the ans
    for(int i=0;i<26;i++){  
     char c= 'a'+i;  // a+0=a , a+1=b, a+2=c;
     
        while(v[i]){  // loop will run until the frequency becomes zero
            ans+=c; // adding the alphabet to ans string
            v[i]--; // decreasing the frequency
        }
    } cout<<ans;

}
