#include<iostream>
#include<map>
using namespace std;

int main() {
    string s = "malayalam";
  map<char,int>mp;
  for(int i=0;i<s.size();i++){
      mp[s[i]]++;
  }
  for(int i=0;i<s.size();i++){
      cout<<s[i]<<"------->"<<mp[s[i]]<<endl;
  }
}
