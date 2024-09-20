 
#include <bits/stdc++.h>
using namespace std;


int main() {
    int num=324;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            cout<<i<<endl;
            cout<<num/i<<endl;
        }
    }
  
    return 0;
}
