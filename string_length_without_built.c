#include<stdio.h>
int main()
{
    char a[100];
    int count=0;

    printf("Enter :");
    fgets(a-1,100,stdin);

    for (int i=0; a[i]!='\0'; i++)
        {
            count++;
        }
    printf("%d",count);

}