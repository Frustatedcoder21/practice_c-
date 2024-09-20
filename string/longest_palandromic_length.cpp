
#include <iostream>
#include<vector>
using namespace std;
int main()
{ 

    string s;
    getline(cin,s);
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++){
        v[s[i]-'a']++;  // taking the frequency of element
    }
    int sum=0,flag=0;
    for(int i=0;i<26;i++){
        if(v[i]%2==0){  // if even occurrences
            sum=sum+v[i];  // directly add to sum
        }else{  // if odd occurrences
            sum=sum+v[i]-1; // directly add to sum but -1   so if a=3 we use a=2 times
            flag=1;  // if odd is find we can directly put one of the in the middle part
        }
    } sum=sum+flag; // add it to lenth +1 if the oddd occurrences are there;
  
    cout<<"longest length of palandromic string :"<<sum; //Answer
    
}