#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,arr1[15];
    int *ptr;
    printf("Input the number of elements to store in the array (max 15)\n");
    scanf("%d",&x);
    ptr=&arr1[0];
    printf("input %d number of elements in the array : \n",x);
    for( i=0;i<x;i++)
    {printf("element - %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    ptr=&arr1[x-1];
    printf("\n the elements in reverse order");
     for(int i=0;i<x;i++)
     {
         printf("\n element - %d : %d",i,*ptr);
         ptr--;
     }
    return 0;
}
