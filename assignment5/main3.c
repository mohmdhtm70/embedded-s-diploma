#include <stdio.h>
#include <stdlib.h>

int main()
{char str1[50];
char revstr[50];
char *stptr=str1;
char *rvptr=revstr;
int i=-1;
printf("enter a string");
scanf("%s",str1);
while(*stptr)
{
    stptr++;
    i++;
}
while(i>=0)
{
    stptr--;
    *rvptr=*stptr;
    rvptr++;
    --i;
}
*rvptr='\0';
printf("revere of the string is : %s\n",revstr);

    return 0;
}
