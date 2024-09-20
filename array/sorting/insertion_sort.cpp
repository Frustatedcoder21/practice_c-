
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the sorted array"<<endl;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){ // yaha i=1 le rhe kyunki hum manke chal rhe phele element hmesha sorted hoga
        for(int j=i;j>0;j--){
           
            if(arr[j-1]>arr[j]){ //phir age wale element ko piche wale se check kiye agar chota hai toh swap krdo
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
  
}

    