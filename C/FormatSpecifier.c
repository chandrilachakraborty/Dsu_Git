// %a.bf will print var with with b decimal points in a 'a' character space.

#include <stdio.h>
#define PI 3.14
int main()
{
    float a = 3.45, b = 4.875, c = 9.69;
    const float d = 4.33;
    printf("%f\n", a );
    printf("%11.6f", b );
    printf("\n%-15.7f", c );

    /*d = 5.12;
    PI = 6.5           this is wrong as PI and d are constant variables*/ 
    printf("\n%f",d);
}