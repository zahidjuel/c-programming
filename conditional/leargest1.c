// Write a C program to find the largest number out of two numbers.
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two  number: ");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
    {
        printf("%d is leargest",n1);
    }
    else if (n1 < n2)
    {
        printf("%d is leargest",n2);
    }
    else
    {
        printf("%d and %d is equal : ",n1,n2);
    }
}