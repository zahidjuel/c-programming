// float datatype :
#include <stdio.h>
int main()
{
    // float -- %f .6 digit
    float f = 67.54f;
    printf("I am float %.2f\n", f);

    // double -- %lf .7-14 digit
    double d = 34.5665757565477;
    printf("I am double %lf\n", d);

    // long double --- %Lf
    long double ld = 785454645674576.565; 

    // Use the %Lf format specifier to print a long double
    printf("The value of long double ld is %Lf\n", ld);

    long double myLongDouble = 1234.567890123456789012345678901234567890L; // Example long double value
    printf("Long Double Value: %.18Lf\n", myLongDouble);
    return 0;
}
