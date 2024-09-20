#include <bits/stdc++.h>
using namespace std;

/*void power(int n,int expo,int val) {
    if(expo<1){
        cout<< val;
        return;
    }
    val=n*val;
    power(n,expo-1,val);
    
}*/
int power(int n,int expo){
    if(expo==1)  // if exponent = 1 , it will result in same number
     return n;  
     return n*power(n,expo-1);   //e.g.  power(2,5)=2* power(2,4);
}

int main() {
   
//   power(6,3,1);
cout<<power(2,8);
}
