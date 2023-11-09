// write a c program to calculate vowel or consonant using switch statement :
#include<stdio.h>
int main(){
    int L;
    printf("Please enter a letter :");
    scanf("%c",&L);
    switch (L)
    {
    case 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U':
        printf("%c is Vowel", L);
        break;
    
    default:
        printf("%c is consonat",L);
    }

}