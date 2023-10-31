// Type conversion
#include<stdio.h>
int main(){
    //implicit conversion
    char ch = 'B';
    int ch1 = ch + 10;
    printf("Result is : %c\t %d\t %o\t %X\n",ch,ch,ch,ch);
    printf("Result is : %d\t %c\n",ch1,ch1);

    // explicit conversion
    // float f = (float)ch1;
    printf("Result is %f\n",(float)ch1);

    float a = 3.5f;
    float b = 6.4f;
    float c = 5.4f;

    int result = a + b + c;
    printf("%d\n",result);

    int result2 = (int)a + (int)b + (int)c;
    printf("%d",result2);
    return 0;
}