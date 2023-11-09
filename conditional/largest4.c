/* Write a C program to find the largest number out of three numbers.
using logical && operator*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("please enter three number : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        printf("%d is a largest number : ", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is largest number : ", b);
    }
    else if (c >= a && c >= b)
    {
        printf("%d is largest number : ", c);
    }
    else{
        printf("%d %d %d is equal",a,b,c);
    }
}