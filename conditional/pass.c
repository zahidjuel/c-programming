#include <stdio.h>
int main()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);
    if ((num >= 33 && num <= 100))
    {
        printf("Pass :");
    }
    else if (num < 33 && num >= 0)
    {
        printf("Fail :");
    }
    else
    {
        printf("Invalid Marks : ");
    }

    return 0;
}