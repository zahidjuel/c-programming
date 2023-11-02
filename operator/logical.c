#include<stdio.h>
#include<stdbool.h>
int main(){
    bool is_love = true;
    int salary   = 500;
    int car = 1;
    bool is_adult = true;

    bool is_marry = (salary >= 50000 && is_love && is_adult);
    printf(" %d\n", is_marry);

    bool is_marry2 = ((salary >= 50000) || (is_love && is_adult));
    printf(" %d\n", is_marry2);

    bool is_marry3 = (!(salary <= 50000));
    printf(" %d\n", is_marry3);
    return 0;
}

// logical and && : all condition true is ______ true
// Logical or || : one condition true is _______ true
//logica not ! : condition tue is ____ false / conditon false is _______ true.