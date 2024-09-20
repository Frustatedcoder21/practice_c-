#include<bits/stdc++.h>
using namespace std;

int count_vowel(string s,int index,int size, int count ){
   if(index>size)
   {return count;
    
   }
   if(s[index]=='a'||s[index]=='e'||s[index]=='i'||s[index]=='o'||s[index]=='u')
   {
      return count_vowel(s,index+1,size,count+1);
   }else{
        return count_vowel(s,index+1,size,count);
   }
}


int main() {
    string s;
    getline(cin,s);
    cout<<count_vowel(s,0,s.size()-1,0);
}
