
#include <iostream>
using namespace std;

int main()
{
     string s;
     cout<<"Enter the string: ";
     getline(cin,s);  // here getline is used instead of cin so that we can take space in input
    int start=0,end=s.size()-1;
    cout<<endl;
    cout<<"string reversed: ";
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
        
    }
    cout<<s;
}