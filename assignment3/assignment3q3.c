#include <stdio.h>
#include <stdlib.h>
void reverse(int x,char array[], int size1);
int main()
{char array[50];
    printf("enter a sentence \n");
    gets(array);
    int x;
    x=strlen(array);
    reverse(x,array,50);
    return 0;
}
void reverse(int x,char array[], int size1)
{
    printf("%c",array[x]);
    x--;
    if(x>=0){
        reverse(x,array,50);
    }

}
