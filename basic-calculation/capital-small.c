// Write a c program to convert capital letter to small letter :
#include <stdio.h>
int main()
{
    char lowercase, uppercase;
    printf("Please Enter Lowercase & uppercase letter : ");
    scanf("%c %c", &lowercase, &uppercase);
    printf("The uppercase letter is : %c\n", lowercase - 32);
    printf("The lowercaser letter is : %c", uppercase + 32);
    return 0;
}