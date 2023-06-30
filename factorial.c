#include<stdio.h>
int main()
{
    int a;
    int b=1;
    
    printf("enter Number :");
    scanf("%d",&a);

    for (int i=1; i<=a ; i++)
        {
           b*=i;
        }
        printf("%d\n",b);
}