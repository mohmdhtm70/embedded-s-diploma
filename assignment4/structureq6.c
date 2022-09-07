#include <stdio.h>
#include <stdlib.h>
union abc{
char x[32];
int y;
double z;
};
struct all{
double x;
double y;
double z;
double a;
double b;
}s;
int main()
{union abc u;
struct all s;
    printf("\nsize of union=%d \n",sizeof(u));
    printf("\nsize of struct=%d \n",sizeof(s));
    return 0;
}
