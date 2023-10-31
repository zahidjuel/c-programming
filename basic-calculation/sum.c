// Write a C program to find the sum of five integer number: 
#include<stdio.h>
int main(){
    int a, b, c, d, e;
    printf("Please enter five integer number :  ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    int sum = a + b + c + d + e;
    printf("%d\n",sum);
    return 0;
}