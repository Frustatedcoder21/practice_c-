#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if(n==0){
        return 0;
    }
    return  n+sum(n-1);  //n=5  
    //sum(5)=5+sum(4);
    
}

int main() {
    int n;
    cin>>n; 
  cout<<"Sum upto "<<n<<" = "<< sum(n);
}
