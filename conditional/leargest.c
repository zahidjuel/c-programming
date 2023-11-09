// Write a C program to find the largest number out of three numbers. using if statement
#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("please enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    printf("The maximum number is %d\n",max);
}







