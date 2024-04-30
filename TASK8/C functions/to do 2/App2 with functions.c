// Avgerage of three numbers using Functions in C 

#include <stdio.h>

void doAvg(int a, int b, int c)
{
  int result;
  result = (a + b + c) / 3;
  
  printf("Average of three numbers is %d\n", result);
}
int main()
{

  doAvg(2, 3, 4);
  doAvg(10, 40, 80);
  doAvg(45, 786, 89);

  return 0;
}