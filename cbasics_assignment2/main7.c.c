#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,fact=1;
    printf("enter an integer\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&x);
    if(x>0){
        for(int i=1;i<=x;i++){fact=fact*i;}
    printf("factorial = %d",fact);}
    else if(x<0){printf("error!!! factorial of negative number doesn't exist");}
    else{printf("factorial = 1");}
    return 0;
}
