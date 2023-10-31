// string works in c
#include<stdio.h>
int main(){
    char name[10];
    name[0] = 'Z';
    name[1] = 'A';
    name[2] = 'H';
    name[3] = 'I';
    name[4] = 'D';
    printf("%s\n",name);

    //
    char name1[10] = {'J', 'O', 'B', 'A'};
    printf("%s\n",name1);

    char name2[10] = {'J', 'U', 'L', 'e'};
    printf("%s\n",name2);

    char name3[20] = "Pinkey Chowdhury";
    printf("%s\n",name3);
    printf("%c\t",name3[0]);
    printf("%c\n",name3[1]);

    char my_name[20];
    printf("What is your name ? ");
    scanf("%[^\n]",my_name);
    printf("Thank you %s",my_name);
    return 0;
}