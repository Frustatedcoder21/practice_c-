 //prime factor
#include <bits/stdc++.h>
using namespace std;


int main() {
    int num=1080;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            int count=0;
           for(int j=1;j<=i;j++){
               if(i%j==0){
                   count++;
               }
           }
           if(count==2){
               cout<<i<<endl;
           }
        }
    }
  
    return 0;
}
