// 1.1.1.1 => 1[.]1[.]1[.]1
#include <iostream>
using namespace std;

int main()
{
     string address;
     cout<<"Enter the address: ";
     getline(cin,address);  // here getline is used instead of cin so that we can take space in input
      string newAddress;
      int index=0;
      while(index<address.size()){
          if(address[index]=='.'){
              newAddress.push_back('[');
              newAddress.push_back('.');
              newAddress.push_back(']');
              
          }
          else{
              newAddress.push_back(address[index]);
          }
          index++;
      }
      cout<<endl<<newAddress;
    
}