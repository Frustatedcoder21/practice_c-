
#include <iostream>
using namespace std;

int main()
{ int a,b;
cin>>a>>b;
  try{
      if(b==0)
      throw "b cannot be zero ";
      cout<<a/b<<endl;
  }catch(const char* e){
      cout<<"Exception occured :"<<e;
  }
  
    
}
