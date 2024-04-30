
//Non-Functional Program in C

//(a+b)2=a2+b2+2ab

#include <stdio.h>
int main()
{
  int a, b, result;
  a = 2;
  b = 3;
  result = (a * a) + (b * b) + (2 * (a * b));  

  printf("Result is %d\n", result);
  
  a = 10;
  b = 20;
  result = (a * a) + (b * b) + (2 * (a * b)); 
  
  printf("Result is %d\n", result);
  
  a = 34;
  b = 78;
  result = (a * a) + (b * b) + (2 * (a * b)); 
  
  printf("Result is %d", result);

  return 0;
}