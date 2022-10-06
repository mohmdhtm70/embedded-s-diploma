#include <stdio.h>
#include <stdlib.h>

int main()
{int *ab;
int m;
m=29;
ab=&m;
printf("addres of m : 0x%p\n",&m);
printf("value of m : %d\n",m);
printf("Now ab is assigned with the address of m.\n");
printf("address of pointer ab :0x%p \n",ab);
printf("content of pointer ab :%d \n",*ab);
m=34;
printf(" the value of m assigned to 34 now .\n");
printf("address of pointer ab :0x%p \n",ab);
printf("content of pointer ab :%d \n",*ab);
*ab=7;
printf("the pointer variable ab is assiogned the value 7 now.\n");
printf("address of m : 0x%p\n",&m);
printf("value of m : %d\n",m);

    return 0;
}
