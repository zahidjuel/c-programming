// write a c program to calculate area of Isosceles triangle 
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Please enter thre side of integer number: ");
    scanf("%f %f %f", &a, &b, &c);
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle is = %.2f", area);
    return 0;
}