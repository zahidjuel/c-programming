#include<stdio.h>
int main(){
    int x,y;
    y = 10;
    x = ++y;
    printf("%d\n",x);
    printf("%d\n",y);

    printf("\n");
    int a,b;
    a = 10;
    b = a++;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}