#include <stdio.h>
#include <stdlib.h>

int main()
{float x,y,z;
    printf("enter two numbers : \n");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f",&x,&y);
    z=x*y;
    printf("product :%f",z);
    return 0;
}
