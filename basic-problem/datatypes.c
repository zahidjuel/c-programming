// dataTypes
#include <stdio.h>
int main()
{
    float a = 7;
    float b = 5;
    float sum = a + b;
    float difference = a - b;
    float multiply = a * b;
    float division = a / b;
    
    printf("%.2f + %.2f = %.2f\n",a,b,sum);
    printf("%.2f - %.2f = %.2f\n",a,b,difference);
    printf("%.2f * %.2f = %.2f\n",a,b,multiply);
    printf("%.2f / %.2f = %.2f\n",a,b,division);
    return 0;
 
}