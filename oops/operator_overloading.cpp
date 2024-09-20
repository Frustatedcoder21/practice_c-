
#include <iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        
    }
    complex(int real,int img){
        this->real=real;
        this->img=img;
    }
    void disp(){
    cout<<real<<"+i"<<img<<endl;
        
    }
    //operator overloading 
    complex operator +(complex &c){  //c2 is passed as a reference variable 
        complex ans;
        ans.real=real+c.real; //  on right side here real is real part of c1 and c.real is real part of c2
        ans.img=img+c.img;  //   on right side here img is img part of c1 and c.img is img part of c2
        return ans; // it returns the answer to complex c3 
    }
    
};
int main()
{   complex c1(2,3);
    c1.disp();
    complex c2(3,5);
    c2.disp();
    complex c3= c1+c2; // here + operator is overloaded c1+ calls the function c2 is passed as parameter
    c3.disp();
    
    
}