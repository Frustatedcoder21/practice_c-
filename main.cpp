//ncr combination
#include<iostream>
using namespace std;
int
probab (int n, int r)
{
  int upper = 1, lower_1 = 1, lower_2 = 1;
  for (int i = 1; i <= n; i++)
    {
      upper = upper * i;
    }
  for (int j = 1; j <= r; j++)
    {
      lower_1 = lower_1 * j;
    }
  for (int k = 1; k <= n - r; k++)
    {
      lower_2 = lower_2 * k;
    }
  return upper / (lower_2 * lower_1);
}

int
main ()
{
  int n, r;
  cin >> n;
  cin >> r;

  cout << probab (n, r);
}
