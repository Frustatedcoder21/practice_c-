//row major {converting 2D array into 1d array row wise}
#include <iostream>
using namespace std;
int main()
{ int arr[3][5]={{1,2,3,4,5},{6,7,8,9,10},{16,17,18,19,20}};
int *arr1 =new int [15];
int row=3,col=5;
 for(int row_index=0;row_index<3;row_index++){
     for(int col_index=0;col_index<5;col_index++){
       int index=row_index*col+col_index;
       arr1[index]=arr[row_index][col_index];
     }
    
 }
 for(int i=0;i<15;i++){
     cout<<arr1[i]<<" ";
 }
 delete []arr1;
   
}