#include <stdio.h>
const int CITY = 2;
const int NAME = 2;
int main()
{
  int temperature[CITY][NAME];
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < NAME; ++j)
    {
      printf("City %d, NAME %d: ", i + 1, j + 1);
      scanf("%d", &temperature[i][j]);
    }
  }
  printf("\nDisplaying values: \n\n");
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < NAME; ++j)
    {
      printf("City %d, NAME %d = %d\n", i + 1, j + 1, temperature[i][j]);
    }
  }
}