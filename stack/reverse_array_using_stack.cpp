#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[5] = {1, 4, 3, 2, 5};
    stack<int> s;

    // Get the size of the array
    int size = sizeof(arr)/sizeof(arr[0]);

    // Push elements into the stack
    for(int i = 0; i < size; i++){
        s.push(arr[i]);
    }

    int i = 0;

    // Pop elements from stack back into the array (reversing the array)
    while(!s.empty()) {
        arr[i] = s.top();
        i++;
        s.pop();
    }

    // Print the reversed array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
