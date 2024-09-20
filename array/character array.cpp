#include<iostream>
using namespace std ;
int get_length (char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}
void reverse (char name[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}
bool is_palindrome(char name[],int n)
{ int s=0,e=n-1;
while(s<e){
if(name[s]!=name[e])
{ return 0;
} else {
    s++;
    e--;
}
} return 1;
}
int main ()
{ char name[20]; int l;
 cout<<"enter your name"<<endl;
 cin>>name;
 cout<<"your name is "<< name;
 l=get_length(name);
 cout<<" number of characters in the array "<< l<<endl;
 reverse(name,l);
 cout<<name<<endl;
 cout<<is_palindrome(name,l);
}
 
