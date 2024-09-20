// pointer & functions
#include<iostream>
using namespace std;
void print(int *p)
{
    cout<<*p<<endl;
}
void update( int*p)
{ cout<<++*p<<endl;
}
int main ()
{ int num=5;
 int *ptr=&num;
 print(ptr);
 update(ptr);
}