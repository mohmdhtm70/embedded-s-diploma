#include <stdio.h>
#include <stdlib.h>
struct distance{

int feet;
float inch;

}d1,d2,sum;
int main()
{
    printf("enter information for 1st distance \n");
    printf("enter feet :");
    scanf("%d",&d1.feet);
    printf("enter inch :");
    scanf("%f",&d1.inch );

    printf("enter information for 2nd distance \n");
    printf("enter feet :");
    scanf("%d",&d2.feet);
    printf("enter inch :");
    scanf("%f",&d2.inch );
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>12.0)
    {
        sum.inch-=12.0;
        ++sum.feet;
    }
    printf("\nsum of distance=%d\'-%f\"",sum.feet,sum.inch);
    return 0;
}
