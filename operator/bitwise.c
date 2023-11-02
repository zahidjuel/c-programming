#include <stdio.h>
int main()
{
    char ch = 65;
    printf("%c\n", ch);
    printf("\n");

    int a = 4;
    int b = 5;
    printf("%d\n", a & b);
    printf("%d\n", a | b);
    printf("%d\n", a ^ b);
    printf("%d\n", a >> 2);
    printf("%d\n", a << 2);
    printf("%d\n", ~a);     // 1's complement
    printf("%d\n", ~a + 1); // 2's complement

    return 0;
}