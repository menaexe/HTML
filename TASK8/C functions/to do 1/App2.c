// Non-Functional Program in C

// Average of three numbers

#include <stdio.h>

int main()
{
    int a, b, c;
    a = 2;
    b = 3;
    c = 5;
    float avg = (a + b + c) / 3;
    
    printf("Average of three numbers: %f\n", avg);

    a = 10;
    b = 20;
    c = 30;
    avg = (a + b + c) / 3;
    
    printf("Average of three numbers : %f\n", avg);
    
    a = 345;
    b = 278;
    c = 3999;
    avg = (a + b + c) / 3;
    
    printf("Average of three numbers : %f", avg);
    
    return 0;
}