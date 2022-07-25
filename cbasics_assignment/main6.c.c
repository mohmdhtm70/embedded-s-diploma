#include <stdio.h>
#include <stdlib.h>

int main()
{ float a,b,x;
    printf("enter value of a \n");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&a);
     printf("enter value of b \n");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&b);
    x=a;
    a=b;
    b=x;
    printf("value of a=%f",a);
    printf("value of b=%f",b);
    return 0;
}
