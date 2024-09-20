// reversing an array using recursion
#include <iostream>
using namespace std;

void array_reverse(int l, int r, int arr[]) //starting and ending index bhej rhe ok bro
{    
    if(l>=r) // base case
    { 
        return;
    }
    
    swap(arr[l], arr[r]);
    array_reverse(l + 1, r - 1, arr);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
   
    array_reverse(0, 4, arr);
    
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
