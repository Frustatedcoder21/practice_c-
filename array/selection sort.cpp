//selection sort 
#include <iostream>

using namespace std;

int
main ()
{
  int arr[5] = { 1, 4, 2, 5, 0 }, min;
  for (int i = 0; i < 5; i++)
    {
      min = i;
      for (int j = i + 1; j < 5; j++)
	{
	  if (arr[min] > arr[j])
	    {
	      min = j;
	    }

	}
      swap (arr[i], arr[min]);
    }
  for (int i = 0; i <= 4; i++)
    {
      cout << arr[i];
}}
