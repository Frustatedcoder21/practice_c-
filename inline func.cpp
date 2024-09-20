/*inline
function*/
#include <iostream>

using namespace std;
inline int get_max(int a,int b)
{  return (a>b)?a:b;
}

int main()
{
    int a=5,b=6;
    
    cout<<"greater is "<< get_max(a,b);

    return 0;
}