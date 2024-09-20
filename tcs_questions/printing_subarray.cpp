//brute force for printing subarray *;
#include <iostream>
using namespace std;
int main()
{   int n=7;
   int arr[7]={1,2,3,4,5,6,9};
   for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           for(int k=i;k<=j;k++){
               cout<<arr[k];
           } cout<<endl;
       }
   }
}