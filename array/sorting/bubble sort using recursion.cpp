// bubble sort using recursion

#include <bits/stdc++.h>
using namespace std;
void replace(vector<int> &arr,int low, int high)
{   for(int i=low;i<high;i++)
 {
    if(arr[i]>arr[i+1])
    {
        swap(arr[i],arr[i+1]);
    }
}}
void bubble_sort(vector<int> &arr,int low,int high)
{   if(low==high)
     {return;}
      replace(arr,low,high);
    bubble_sort(arr,low,high-1);
}

int main()
{
    
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, 0, n - 1);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}







