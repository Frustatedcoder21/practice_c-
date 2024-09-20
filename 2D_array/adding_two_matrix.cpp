//adding two matrix
#include <iostream>
using namespace std;


int main()
{ int arr[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
 int arr1[2][5]={{2,3,4,5,6},{7,8,9,10,11}};
 int arr3[2][5];
 for(int i=0;i<2;i++){
     for(int j=0;j<5;j++){
         arr3[i][j]=arr[i][j]+arr1[i][j];
     }
 }

   for(int i=0;i<2;i++){
     for(int j=0;j<5;j++){
         cout<<arr3[i][j]<<" ";
     }
     cout<<endl;
 }
}