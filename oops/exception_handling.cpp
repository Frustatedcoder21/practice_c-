
#include <iostream>
using namespace std;
class bank{
    string name;
    int balance,ac;
  public:
  bank(string name, int balance, int ac){
      this->name=name;
      this->balance=balance;
      this->ac=ac;
  }
  void deposit(int amt){
      if(amt>0)
      {
          balance+=amt;
          cout<<amt<<" rs credited successfully in your ac\n";
      }
      else{
          throw "Invalid Amt"; //if amt deposited is less than zero or zero then it will throw Exception
      }
  }
  void withdraw(int amt){
      if(amt<=balance){
          cout<<amt<<"rs debited from ac\n";
      }
      else{
          throw "Amt should be less than balance"; // if amt withdrawn is more than existing balance than it will throw Exception
      }
  }
};

int main()
{ bank c1("Mayank",8000,101);
  try{  // block which can throw Exception are put inside the try block
  c1.deposit(200);
  c1.withdraw(9000);
  c1.deposit(300); // this line will not run
  } catch(const char *e){ // throw Exception are catched here , e is character pointer to the string whose Exception is thrown;
   cout<<"Exception Occured :"<<e;
      
  }
  
  
    
}
