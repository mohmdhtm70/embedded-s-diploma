#include <stdio.h>
#include <stdlib.h>
struct student{
char name[50];
int roll;
float marks;
}s[10];
int main()
{
    printf("enter information of students :\n");
    for(int i=0;i<10;i++)
    {
        s[i].roll=i+1;
        printf("\nfor roll number %d\n",s[i].roll);
         printf("enter name :");
        scanf("%s",s[i].name);
         printf("enter marks : ");
         scanf("%f",&s[i].marks);
         printf("\n");


    }
     printf("\ndisplaying information of students \n");
     for(int i=0;i<10;i++){

         printf("\ninformation for roll number %d :\n",i+1);
          printf("name :%s\n",s[i].name);
          printf("marks : %f ",s[i].marks);

     }

    return 0;
}
