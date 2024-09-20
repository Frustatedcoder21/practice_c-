// merge sort 

#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low, int mid , int high)
{ 
    int left=low;
 int right=mid+1;
 vector<int>temp; // temporary storing vector
 while(left<=mid && right<=high)  
 { //merging and putting in temp vector
     if(arr[left]<=arr[right])
     { // smaller one will be pushed inside vector and thwe pointer will be increased;
         temp.push_back(arr[left]);
          left++;
     }
     else{
         temp.push_back(arr[right]);
         right++;
     }
 } // leftout element will pushed inside array as it is 
 while(left<=mid)
 { temp.push_back(arr[left]);
          left++;
     
 }
 while(right<=high)
 {  temp.push_back(arr[right]);
         right++;
     
 }
 // the elememts are copied from temp to original vector
 for(int i=low;i<=high;i++)
 {
     arr[i]=temp[i-low];
 }
     
}

void merge_sort(vector<int> &arr,int low,int high)
{
    if(low==high) //base case
    { return ;}
  int mid=(low+high)/2;   //mid element
  merge_sort(arr,low,mid); dividin
  merge_sort(arr,mid+1,high);
  merge(arr,low,mid,high);
}

int main()
{
    
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    merge_sort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}