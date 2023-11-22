#include <stdio.h>
int main()
{
    int i = 1;
level:
    printf("%d\n", i);
    i++;
    if (i <= 5)
    {
        goto level;
    }
    

    return 0;
}