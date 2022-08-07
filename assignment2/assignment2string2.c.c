#include <stdio.h>
#include <stdlib.h>

int main()
{char arr[30];
int i;
    printf("enter a string :\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%s",arr);
    for(i=0;arr[i]!='\0';i++);

    printf("length of string :%d",i);
    return 0;
}
