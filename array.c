#include <stdio.h>

int main()
{
  int my_array[5] = {1, 2, 3, 4, 5}; // create array with 5 items
  for (int x = 0; x < 5; x++)
  {
    printf("%i \n", my_array[x]);
  }
  return 0;
}