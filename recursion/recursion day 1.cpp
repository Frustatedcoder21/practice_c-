#include<iostream> 
using namespace std;

/* factorial
int factorial(int n) {
    
    //base case
    if(n==0)
        return 1;

    int smallerProblem = factorial(n-1);   
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main() {

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
} */
/* power
#include<iostream> 
using namespace std;

int power(int a,int b) {

    //base case 
    if(n == 0)
        return 1;

    //recursive relation
    return a * power(a,b-1);    
}

int main() {

    int a,b;
    cin >> a;
    cin>>b;

    int ans = power(a,b);

    cout << ans << endl;

    return 0;
} */