// write a c program to calculate centigrade to fahrenheit: 
#include<stdio.h>
int main(){
    float c, f;
    printf("Please enter celsius temperature : ");
    scanf("%f",&c);
    f = (9*c / 5) + 32;
    printf("The fahrenheit temperature is : %.2f",f);
    return 0;
}