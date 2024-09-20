#include <bits/stdc++.h>
using namespace std;

int print(int n) {
    if(n==1||n==0){
        return 1;
    }
    return  n*print(n-1);  //n=5  
    //print(5)=5*print(4);
    
}

int main() {
    int n;
    cin>>n; 
  cout<<"Factorial of "<<n<<" = "<< print(n);
}
