
#include <iostream>
using namespace std;
class base{
    public:
/* virtual function */   virtual void display(){  // it executes during the runtime due to virtal keyword
        cout<<"I am displaying Base class\n";
    }
    void show(){
        cout<<"Hello Base show\n";
    }           
    
};
class child:public base
{
    public:
    void display(){  // overriden function
        cout<<"I am displaying child class\n";
    }
    void show(){  //overriden function
        cout<<"Hello child show\n";
    }
    void greet(){ // non overriden function
        cout<<"Say hello";
    }
};
int main()
{  base *b; // pointer to base class
  child c; //object of child class
  b=&c; //
    b->display();
    b->show();
    // b->greet();
    
    
}