#include <stdio.h>
#include <stdlib.h>

int main()
{char o;
float x,y;
    printf("enter operator either + or - or * or / :\n");
    fflush(stdin);
     fflush(stdout);
    scanf("%c",&o);
    printf("enter two operands");
      fflush(stdin);
     fflush(stdout);
     scanf("%f %f",&x,&y);
     if(o=='+')
     {printf("%f + %f =%f",x,y,x+y);}
     else if(o=='-')
     {printf("%f - %f =%f",x,y,x-y);}
     else if (o=='*')
        {printf("%f * %f =%f",x,y,x*y);}
     else
        {printf("%f / %f =%f",x,y,x/y);}
    return 0;
}
