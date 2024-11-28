#include<iostream>
using namespace std;

class vehicle{
    
    public:
  virtual void print(){ // after applying the virtual keyword , which class print will run will be decided at runtime
        cout<<"bdummmmmmm";
    }
};
class car: public vehicle{
    public:
    void print(){
        cout<<"hudddd";
    }
};

int main(){
    vehicle *v= new car();  // here  v is the pointer of vehicle so vehicle print will be set to call during compile time
    // new car() is runtime code
    v->print();
}