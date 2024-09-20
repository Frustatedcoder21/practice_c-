/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<queue>

using namespace std;

int
main ()
{
  priority_queue < int >pq;
  pq.push (8);
  pq.push (11);			// priority_queue arranges element in form of their priority lexical and numerical value wise //
  pq.push (3);
  pq.push (10);
  pq.push (5);
  pq.push (7);
  //pq.pop();
  cout << pq.top ();


}
