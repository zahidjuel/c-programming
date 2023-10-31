// write a c program to calculate area of circle
#include<stdio.h>
int main(){
    #define pi 3.1416
    float r;
    printf("Please enter circle of radius number: ");
    scanf("%f",&r);
    float area = pi * r * r;
    printf("Area of circle is = %.2f",area);
}