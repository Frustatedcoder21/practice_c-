#include <bits/stdc++.h>
using namespace std;

int sum_of_squares(int n){
  if(n==1){
      return 1; // 1*1=1;
  }  
  return n*n+sum_of_squares(n-1);                          
}
int main(){
    int n;
    cin>>n;
    cout<<sum_of_squares(n);
}
                                                           // sum_of_squares(5)=5*5+sum_of_squares(4);
                                                          //sum_of_squares(4)=4*4+sum_of_squares(3);
                                                         //...
                                                        //.....
                                                       // sum_of_squares(2)=2*2+sum_of_squares(1);
                                                      // sum_of_squares(1)=1