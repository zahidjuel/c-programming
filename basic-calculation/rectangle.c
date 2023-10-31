// write a c program to calculate area of rectangle
#include<stdio.h>
int main(){
    float l, w;
    printf("Please enter length & width : ");
    scanf("%f %f",&l,&w);
    float area = (int)l * (int)w;
    printf("Area of circle is = %d", (int)area);
}