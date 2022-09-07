#include <stdio.h>
#include <stdlib.h>
// pi 3.1415
float area(int r)
{float pi=3.1415;
    float z=pi*r*r;
return z;
}
int main()
{ int r;
    printf("enter the radius\n");
    scanf("%d",&r);
   float Area=area(r);
    printf("Area =%f",Area);
    return 0;
}
