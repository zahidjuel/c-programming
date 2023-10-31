#include <stdio.h>
int main()
{
    // Signed Integer Data
    // short , int, long, long long
    printf("signed integers : \n");
    // short --- %d , %hi
    short a = 10;
    printf("I am short : %hi\n", a);

    // int -- %d, %i

    int b = 12;
    printf("I am int:  %d\n", b);

    // long -- %ld, %li
    long c = 100L;
    printf("I am long:  %ld\n", c);

    // long long -- %lld , %lli
    long long d = 12344ll;
    printf("I am long long : %lld\n", d);

    // octal int -- %o
    int o = 077;
    printf("I am Octal %o\n", o);

    // hexa-decimal int -- %x, %X
    int h = 0xff;
    printf("I am hexa-decimal %X\n", h);

    // octal convert to decimal
    printf("I am octal %d\n", o);
    // hexa-decimal convert to decimal
    printf("I am hexa-decimal %d\n", h);

    // unsigned integers:
    printf("unsigned integers : \n\n");

    // unsigned short -- %hu
    unsigned short us = 7;
    printf("I am unsigned short: %hu\n", us);

    // unsigned int -- %u
    unsigned int ui = 75;
    printf("I am unsigned int: %u\n", ui);

    // unsigned long -- %lu
    unsigned long ul = 76776l;
    printf("I am unsigned long: %lu\n", ul);

    // unsigned short -- %llu
    unsigned long long ull = 75656ll;
    printf("I am unsigned long long: %llu\n", ull);

    unsigned short negative = -2;
    printf("unsigned negative number is %hu\n",negative);

    // -2
    // 0000000000000010 = 2
    // 1111111111111101  // 1's complement
    //               +1
    // 1111111111111110  // 2's complement = -2

    return 0;
}