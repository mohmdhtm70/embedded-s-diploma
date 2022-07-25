#include <stdio.h>
#include <stdlib.h>

int main()
{float a,b;

    printf("enter value of a:\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&a);
     printf("enter value of b:\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping, the value of a is %f and the value of b is %f",a,b);
    return 0;
}
