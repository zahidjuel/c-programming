// write a c program to find simple calculator :
#include <stdio.h>
int main()
{
    float n1, n2;
    printf("Enter two number: (4 4.5) : ");
    scanf("%f %f", &n1, &n2);
    float sum = n1 + n2;
    float difference = n1 - n2;
    float multiply = n1 * n2;
    float division = n1 / n2;

    printf("%.2f + %.2f = %.2f\n", n1, n2, sum);
    printf("%.2f - %.2f = %.2f\n", n1, n2, difference);
    printf("%.2f * %.2f = %.2f\n", n1, n2, multiply);
    printf("%.2f / %.2f = %.2f\n", n1, n2, division);
}