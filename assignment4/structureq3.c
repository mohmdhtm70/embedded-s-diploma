#include <stdio.h>
#include <stdlib.h>
struct complex{
float real;
float imag;
}d1,d2,sum;
int main()
{
    printf("for 1st complex number \n");
    printf("enter real and imaginary respectively :");
    scanf("%f   %f",&d1.real,&d1.imag);
     printf("for 2nd complex number \n");
    printf("enter real and imaginary respectively :");
    scanf("%f   %f",&d2.real,&d2.imag);
    sum.real=d1.real+d2.real;
    sum.imag=d1.imag+d2.imag;
    printf("sum=%f+j%f",sum.real,sum.imag);
    return 0;
}
