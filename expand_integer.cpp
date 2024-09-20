
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int number=1857;
   
    vector<int> val;
    while(number>0){
     
      int temp=number%10;
      val.push_back(temp);
      number=number/10;
        
        
    }
  
    int start=0 ,end=val.size()-1;
    while(start<end){
        swap(val[start],val[end]);
        start++;
        end--;
    
};
for(int i=0;i<val.size();i++){
    if(i==val.size()-1){
        cout<<val[i];
    }else{
        cout<<val[i]*pow(10,val.size()-i-1)<<"+";
    }
}}

