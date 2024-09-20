
#include <iostream>
using namespace std;
void print(int arr[][5]){  //as we pass 2D-array in function we have to pass column because it is used to find the address of the element 
    cout<<arr[2][3];  // arr[i][j]=base_index+(row_index*column+column_index)*size;
}

int main()
{ int arr[3][5]={{1,2,3,4,5},{6,7,8,9,10},{16,17,18,19,20}};
print(arr);
   
}