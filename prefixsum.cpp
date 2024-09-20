
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
    int sum=0;
   for(int i=0;i<l;i++){
       sum+=arr[i];
       arr[i]=sum;
   }
    for (int i = 0; i < l; i++) {
        cout<< arr[i];
    }
 
}