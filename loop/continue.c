#include <stdio.h>
int main()
{

    for (int i = 1; i <= 20; i++)
    {

        if (i % 3 == 0)

        {
            continue; // continue means skip loop. no execute after continue keyword code.
        }
        printf("%d\n", i);
        printf("Hello world\n");
    }
    printf("C Programming !");
    return 0;
}