#include <stdio.h>
#include <stdlib.h>

int main()
{char text[30],ch;
int i,count=0;

    printf("enter a string :\n");
    fflush(stdin);
    fflush(stdout);
    gets(text);
    printf("enter a character to find frequency : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&ch);
    for(int i=0;text[i]!='\0';i++)
    {
        if(ch==text[i])
            ++count;
    }
    printf("frequency of %c =%d",ch,count);
    return 0;
}
