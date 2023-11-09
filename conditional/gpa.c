// write a c program to calculate gpa :
#include <stdio.h>
int main()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);
    if ((num >= 80 && num <= 100))
    {
        printf("%d is A+ ", num);
    }
    else if (num < 80 && num >= 70)
    {
        printf("%d is A", num);
    }
    else if (num < 70 && num >= 60)
    {
        printf("%d is A -", num);
    }

    else if (num < 60 && num >= 50)
    {
        printf("%d is B", num);
    }
    else if (num < 50 && num >= 40)
    {
        printf("%d is C", num);
    }

    else if (num < 40 && num >= 33)
    {
        printf("%d is D",num);
    }
    else if (num < 33 && num >= 0)
    {
        printf("%d is Fail : ",num);
    }
    else
    {
        printf("Invalid Marks : ");
    }
}