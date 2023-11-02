// write a c program to calculate area of triangle given base & height
#include<stdio.h>
int main(){

    float base , height;
    printf("please enter base & height : ");
    scanf("%f %f",&base,&height);
    float area = 0.5 * base * height;
    printf("Area of triangle is = %.2f",area);
    return 0;
}