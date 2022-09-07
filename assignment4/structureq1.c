#include <stdio.h>
#include <stdlib.h>
struct student{
char name[50];
int roll;
float marks;

};
int main()
{struct student s;
 printf("\n enter information of students\n");
  printf("enter name ");
 gets(s.name);
  printf("enter roll number ");
  scanf("%d",&s.roll);
  printf("enter marks ");
  scanf("%f",&s.marks);
    printf("displaying information \n");
    printf("name : %s\n",s.name);
     printf("roll: %d\n",s.roll);
      printf("marks : %f\n",s.marks);
    return 0;
}
