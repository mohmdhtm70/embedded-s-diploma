#include <stdio.h>
#include <stdlib.h>

int main()
{

int arr[20],x,y;
printf("enter no of elements :");
fflush(stdin);
fflush(stdout);
scanf("%d",&x);
for(int i=0;i<x;i++){scanf("%d",&arr[i]);}
printf("enter the element to be searched :");
fflush(stdin);
fflush(stdout);
scanf("%d",&y);
int k=0,z=0;
for(int i=0;i<x;i++){k++;
if(arr[i]==y){
    z++;
    break;}
}
if(z>0)
    printf("number found at the location =%d",k);
else
    printf("the number is not exist");
}
