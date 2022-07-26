#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,y,z;

    printf("enter three numbers \n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){
        if(x>z){
            printf("largest number = %d ",x);
        }
        else{
            printf("largest number = %d ",z);
        }}
        else {
            if(y>z){printf("largest number =%d",y);}
            else{printf("largest number =%d",z);}
        }


    return 0;
}
