/* Write a C program to find the largest number out of three numbers.
using one printf(" ") */

#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter thre numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = b;
        }
    }
    else
    {
        if (b > c)
        {
           max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("%d is largest number : ", max);
}