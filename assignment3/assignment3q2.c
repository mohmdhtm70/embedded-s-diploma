#include <stdio.h>
#include <stdlib.h>
int factorial(int x);
int main()

{ int x,y;
    printf("enter a positive integer \n");
    scanf("%d",&x);
    printf("factorial of %d is %d ",x,factorial(x));
    return 0;
}
int factorial(int x)
{int fact=1;
 fact=fact*x;

if(x>1){
       return x*factorial(x-1);}
else{
    return fact;}

}
