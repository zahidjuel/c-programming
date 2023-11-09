// write a c program to calculate capital letter or small letter
#include <stdio.h>
int main()
{
    char L;
    printf("Please enter a Letter : ");
    scanf("%c", &L);
    if (L >= 'A' && L <= 'Z')
    {
        printf("%c is capital letter : ", L);
    }
    else if (L >= 'a' && L <= 'z')
    {
        printf("%c is small letter :", L);
    }
    else
    {
        printf("There is no letter : ");
    }
}