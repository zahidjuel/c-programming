// write a c program to convert fahrenheit to celcius :
#include <stdio.h>
int main()
{
    float f, c;
    printf("Please enter fahrenheit temperature : ");
    scanf("%f", &f);
    c = 5 * (f - 32) / 9;
    printf("The celcius temperature is : %.2f", c);
    return 0;
}