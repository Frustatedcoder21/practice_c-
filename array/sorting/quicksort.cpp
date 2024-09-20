
#include <iostream>
using namespace std;
int partition(int arr[],int start, int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
 void quicksort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int pivot=partition(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
    
}
int main()
{
     int v[5] = {2, 1, 3, 7, 6};

    quicksort(v, 0, 4);
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}