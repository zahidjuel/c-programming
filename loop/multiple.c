// write a c program that print 1, 2, 4, 8, 16, 32
#include<stdio.h>
int main(){
    for(int i = 1; i <= 32; i = i * 2){
        printf("%d\n",i);
    }

    printf("\n");

    // write a c program that print 32, 16, 8, 4, 2, 1
    for(int j = 32; j >= 1; j = j / 2){
        printf("%d\n",j);
    }
}
