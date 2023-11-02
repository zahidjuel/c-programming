#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 11;
    int b = 5;
    //true = 0;
    //false = 1;
    bool is_a_is_smaller = a < b;
    bool is_a_is_smaller_equal = a <= b;
    bool is_a_is_greater = a > b;
    bool is_a_is_greater_equal = a >= b;
    bool is_a_equal_b = a == b;
    bool is_a_equal_not_b = a != b;

    printf("%d\n", is_a_is_smaller);
    printf("%d\n", is_a_is_smaller_equal);
    printf("%d\n", is_a_is_greater);
    printf("%d\n", is_a_is_greater_equal);
    printf("%d\n", is_a_equal_b);
    printf("%d\n", is_a_equal_not_b);
}