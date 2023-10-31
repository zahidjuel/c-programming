// Variables Definitions Vs Declaration
// A variable value is changeable
#include <stdio.h>
int main()
{

    int a = 10;
    printf("%d\n", a);
    a = 12;
    printf("%d\n", a);

    int n1 = 50;
    int n2 = 5;
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
    printf("%d %% %d = %d\n", n1, n2, n1 % n2);

    // A constant value is not changeable
    const int number = 14;
    printf("The number is %d\n", number);
#define pi 3
#define pi2 3.1416
#define name 'Z'
    printf("The constant PI value is %d\n", pi);
    printf("The constant PI value is %.2f\n", pi2);
    printf("The constant name value is %c\n", name);

    int zahid$ = 100;
    int $zahid = 35;
    printf("%d\n",zahid$);    
    printf("%d\n",$zahid);    
    return 0;
}