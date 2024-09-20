
#include <iostream>
using namespace std;

int main()
{
 int l;
    cout << "Enter the length :";
    cin >> l;
    
    int arr[1000] = {0};
    for (int i = 0; i < l; i++) {
        cin >> arr[i];
    }
    int key;
    cout<<"enter the key";
    cin>>key;
 int top=0,end=l-1,mid,index;
    while(top<end){
        mid=(top+end)/2;
        if(arr[mid]==key){
           index=mid;
            break;
        }
        if(arr[mid]>key){
            end=mid;
        }else{
            top=mid;
        }
    }
    cout<<index;
 
}