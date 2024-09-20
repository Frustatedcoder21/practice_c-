#include<iostream>
using namespace std;
 class student{
     public:
     int *roll;
      student()  
      {           
          roll=new int;
          *roll=10;
          cout<<"constructor is called"<<endl;
      }
      ~student(){ // dynamically allocated data gets delete when destructor is invoked
          cout<<"destructor is called";
      }
     
     
       // static allocated data gets deleted automatically at the end of the program during stack deletion
     
 };
 int main(){
      student s;
    
 }