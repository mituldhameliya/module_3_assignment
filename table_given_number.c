#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter table No. :");
    scanf("%d",&a);

    printf("Enter till No. of Table :");
    scanf("%d",&b);

    for (int c=1 ; c<=b ; c++)
        {
            printf("%d X %d = %d\n",a,b,a*b);
        }
}