#include<stdio.h>
int main(){
    //conditional operator ../ ternary operator
    int  x = 200, y = 155;
    int z = (x > y)? x : y;
    (x>y)?printf("%d is leargest number\n",x):printf("%d is leargest number\n",y);
    (x<y)?printf("%d is smallest number\n",x):printf("%d is smallest number\n",y);
    printf("%d",z);
}
