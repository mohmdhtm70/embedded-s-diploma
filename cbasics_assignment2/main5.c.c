#include <stdio.h>
#include <stdlib.h>

int main()
{char x;
    printf("enter a character\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&x);
    if(((x>='a')&&(x<='z'))||((x>='A')&&(x<='Z'))){
       printf("%c is an alphabet",x);}
    else{printf("%c is not an alphabet",x);}
    return 0;
}
