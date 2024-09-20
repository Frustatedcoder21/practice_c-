//lower_to_uppercase_without_stl
#include <iostream>
using namespace std;
int main()
{
    string s="Hello Mayank";
    for(int i=0;i<s.size();i++){
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]+=32;
        }else if(s[i]>=97&&s[i]<=122){
            s[i]-=32;
        }
    }
    cout<<s;
}