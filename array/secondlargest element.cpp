/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
/* better solution
int main()
{
   int arr[6]={1,6,5,3,4,9}, max=arr[0],second_max=-1;
   for(int i =1; i<6;i++)
   {  if(arr[i]>max)
    { max=arr[i];}
}
cout<<max;
for(int i=0;i<6;i++){
if(arr[i]>second_max && arr[i]!=max )
{
    second_max=arr[i];
    
    

    
} } cout<<second_max;
}*/
//optimal solution 

int main ()
{ int arr[6]={1,6,5,3,4,9}, max=arr[0],second_max=-1;
 for(int i =1; i<6;i++)
   {  if(arr[i]>max)
    { second_max=max;
    max=arr[i];}
    else{
      if(arr[i]>second_max && second_max<max)
      {
          second_max=arr[i];
      }
    }
}
cout<<max<<endl;
cout<<second_max;
    
}