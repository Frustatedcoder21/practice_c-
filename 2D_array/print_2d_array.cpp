//printing of 2-D array
#include <iostream>
using namespace std;
int main()
{ int arr[5][6]={{1,2,3,4,5,50},{6,7,8,9,10,50},{16,17,18,19,20,50},{21,22,23,24,25,50},{26,27,28,29,30,50}};
 for(int i=0;i<5;i++){
     for(int j=0;j<6;j++){
         cout<<arr[i][j]<<" ";
     }
     cout<<endl;
 }
   
}