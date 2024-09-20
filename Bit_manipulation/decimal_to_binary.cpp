
#include <iostream>
#include<string>
using namespace std;
string decimal_to_binary(int num){
    string s;
 while(num>0){
     int temp=num%2;
     s.push_back(temp+ '0');
     num=num/2;
     
 } int start=0,end=s.size()-1;
 while(start<end){
     swap(s[start],s[end]);
     start++;
     end--;
 }
 return s;
}
int main()
{ int n;
 cin>>n;
 cout<< decimal_to_binary(n);
    
}