/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
//  removing duplicacy from array
using namespace std;
int duplicacy(int arr[],int n)
{  int i=0;
    for(int j=1;j<n;j++)
    { if(arr[i]!=arr[j])
     {
          i++;
          arr[i]=arr[j];
     }
} return i+1;
}
int main()
{ int n=5,arr[5]={1,1,2,3,3},k;
 k= duplicacy(arr,n);
 for(int i=0;i<k;i++)
 {  cout<<arr[i];
     
 }

    

    return 0;
}