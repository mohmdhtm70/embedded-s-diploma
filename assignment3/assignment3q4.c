#include <stdio.h>
#include <stdlib.h>
int power(int x,int y);
int main()
{int x,y;
    printf("enter base number \n");
    scanf("%d",&x);
    printf("enter power number(positive integer) \n");
    scanf("%d",&y);
    int z=power(x,y);
    printf("%d^%d=%d",x,y,z);
    return 0;
}
int power(int x,int y)
{
if(y!=0){
    return(x*power(x,y-1));}
    else
        return 1;
}
