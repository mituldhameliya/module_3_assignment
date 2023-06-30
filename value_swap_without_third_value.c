#include <stdio.h>
int main()
{
    int a,b;

    printf("enter value of A=");
    scanf("%d",&a);

    printf("enter value of B=");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("value of A after swap=%d\n",a);
    printf("value of B after swap=%d\n",b);

    (a>b)? printf("true") : printf("false");

}