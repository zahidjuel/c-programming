#include <stdio.h>
int main()
{
    char color_code;
    printf("Please enter a color code : ");
    scanf("%c", &color_code);

    if (color_code == 'R')
    {
        printf("It is Red color : ");
    }

    else if (color_code == 'G')
    {
        printf("It is Gren color : ");
    }

    else if (color_code == 'B')
    {
        printf("It is Blue color : ");
    }
    else
    {
        printf("Not matched a color : ");
    }
}