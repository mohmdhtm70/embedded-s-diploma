#include <stdio.h>
#include <stdlib.h>

int main()
{int x,y,sum;
    printf("enter two integers\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d",&x,&y);
    sum=x+y;
    printf("sum :%d",sum);
    return 0;
}
