#include <stdio.h>
#include <stdlib.h>

int main()
{int x,sum=0;
    printf("enter an integer\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&x);
    int i;
    for( i=0;i<=x;i++){
        sum+=i;
    }
    printf("sum=%d",sum);
    return 0;
}
