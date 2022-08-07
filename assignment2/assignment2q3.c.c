#include <stdio.h>
#include <stdlib.h>

int main()
{int r,c;
int a[10][10];
int b[10][10];
    printf("enter rows and column of matrix :\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("enter elements a%d%d ",i+1,j+1);

        scanf("%d",&a[i][j]);
    }}
     printf("entered matrix : \n");
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       printf("%d\t",a[i][j]);

    }
    printf("\n");}
    printf("\n");
    //the transpose of the matrix
    printf("transpose of matrix :\n");
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        b[i][j]=a[j][i];
       printf("%d\t",b[i][j]);

    }
    printf("\n");}

    return 0;

}
