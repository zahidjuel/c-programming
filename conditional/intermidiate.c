/* Write a C program to find the intermidiate number out of three numbers.
using logical && operator*/
#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3); //takes input from user

    //checking num1 is a middle number or not
    if(num2>num1 && num1>num3 || num3>num1 && num1>num2){
        printf("%d is a middle number",num1);
    }

    //checking num2 is a middle number or not
    else if(num1>num2 && num2>num3 || num3>num2 && num2>num1){
        printf("%d is a middle number",num2);
    }

    //checking num3 is a middle number or not
    else if(num1>num3 && num3>num2 || num2>num3 && num3>num1){
        printf("%d is a middle number",num3);
    }
    else {
        printf("There is no middle number");
    }
    return 0;
}