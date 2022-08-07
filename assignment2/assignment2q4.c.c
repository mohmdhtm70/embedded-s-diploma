#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z=0;
int arr[20];
    printf("enter the number of elements :\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&x);
    for(int i=0;i<x;i++){

   scanf("%d",&arr[i]); }
   printf("enter the element to be inserted :\n");
   fflush(stdin);
    fflush(stdout);
   scanf("%d",&y);
   printf("enter the location :\n");
fflush(stdin);
    fflush(stdout);
   scanf("%d",&z);


for(int i=1;i<=x;i++)
{
    if(i==z)
    {
        printf("%d  ",y);
    }
    printf("%d  ",arr[i-1]);
}

    return 0;
}
