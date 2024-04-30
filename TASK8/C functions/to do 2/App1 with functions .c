//(a+b)2=a2+b2+2ab program using Function in C

#include <stdio.h>

void squareOfTwoNumbers(int a, int b)
{
  int result;
  result = ((a * a) + (b * b) + (2 * (a * b)));
  
  printf("Result : %d\n", result);
}

int main()
{

  squareOfTwoNumbers(1,2);
  squareOfTwoNumbers(30, 60);
  squareOfTwoNumbers(333, 766);

  return 0;
}