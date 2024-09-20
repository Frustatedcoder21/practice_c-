
#include <bits/stdc++.h>
using namespace std;
string to_roman(int n){
    int arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string arr1[13]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string temp="";
    for(int i=0;i<6;i++){
        while(n>=arr[i]){
            temp+=arr1[i];
            n=n-arr[i];
        }
    }
    return temp;
    
}
int to_numeral(string n){
    map<char,int>mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    int num=0;
    for(int i=0;i<n.size()-1;i++){
        if(mp[n[i]]>=mp[n[i+1]]){
            num+=mp[n[i]];
        }else{
            num-=mp[n[i]];
        }
    }
    num+=mp[n[n.size()-1]];
    return num;
    
    
}
int main()
{
  string n;
  cin>>n;
 cout<< to_numeral(n);
 int val;
 cin>>val;
 cout<<to_roman(val);
}