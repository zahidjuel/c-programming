// write a c program to match colorCode using switch statement :
#include <stdio.h>
int main()
{
    char color_code;
    printf("Please enter a character : ");
    scanf("%c", &color_code);
    switch (color_code)
    {
    case ('w'):
        printf("%c is white : ", color_code);
        break;

    case 'r':
        printf("%c is Red : ", color_code);
        break;

        case 'g':
        printf("%c is Green : ", color_code);
        break;

    default:
       printf("Wrong choose");
    }
}