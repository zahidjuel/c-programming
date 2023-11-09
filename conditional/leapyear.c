// write a c program to calculate leap year
#include<stdio.h>
int main(){
    int year;
    printf("Please enter a year : ");
    scanf("%d",&year);
    if (year % 400 == 0)
    {
        printf("%d was Leap Year / 29 days",year);
    }
    else if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("%d was Leap Year / 29 days",year);
    }
    else{
        printf("%d was not leap Year / 28 days",year);
    }

    return 0;
}