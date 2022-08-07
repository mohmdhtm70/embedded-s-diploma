#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
float sum=0,average;
float arr[n];
    printf("enter the number of data :\n");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("enter number : ");
        scanf("%f",&arr[i]);
        sum +=arr[i];
    }
    average =sum/n;
    printf("average = %f",average);s
    return 0;
}
