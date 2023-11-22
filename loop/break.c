#include<stdio.h>
int main(){
    for(int i = 1; i <= 10; i++){
        printf("%d\n",i);
        if(i == 7){
            break; // break means loop stop. no execute after break keyword code...
        }
        printf("Hello World !\n");
       
    }
     printf("C Programming !");
}