#include <stdio.h>
#include <stdlib.h>
struct emplyee
{
char name[100];
int id;
};
int main()
{struct emplyee x={"mohamed",1},y={"hatem",2};
struct emplyee *arr[2]={&x,&y};
struct emplyee*(*ptr)[2]=&arr;
    printf("employee1 name : %s\n",(*(*ptr))->name);
    printf("employee1 id: %d\n",(*(*ptr))->id);
     printf("employee2 name : %s\n",(*(*ptr+1))->name);
    printf("employee2 id: %d\n",(*(*ptr+1))->id);
    return 0;
}
