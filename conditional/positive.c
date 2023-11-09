// write a c program to find a number positive or negative......
#include <stdio.h>
int main()
{
    int n;
    printf("Please enter a number :");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d is Positive",n);
    }
    else if (n < 0)
    {
        printf("%d is Negative : ",n);
    }
    else{
        printf("%d is equal!!!!!!!!!!!!",n);
    }
}