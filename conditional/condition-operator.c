// Write a c program to find a number even or odd..
#include<stdio.h>
int main(){
    int n;
    printf("Please enter a number : ");
    scanf("%d",&n);
    (n % 2 == 0)? printf("%d is Even",n) : printf("%d is odd",n);
    
}