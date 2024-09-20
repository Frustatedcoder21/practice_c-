//linearsearch
#include<iostream>
using namespace std;
int linearsearch( int arr[],int size,int key)
{ for(int i=0;i<size;i++)
{ if(arr[i]==key)
 return i;}
  return 0;
 

}
int main ()
{ int size,key;
 cout<<"enter the size";
 cin>>size;
 cout<<"enter the key to be searched";
 cin>>key;
 int arr[100];
 for(int i=0;i<size;i++)
 { cin>>arr[i];
 }
 cout<<"The key is found at posi"<<" "<<linearsearch(arr,size,key);
 }
