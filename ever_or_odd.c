#include<stdio.h>
int main()
{
    int a;

    printf("enter number=");
    scanf("%d",&a);
    
    (a%2==0) ? printf("number is even") : printf("number is odd");

}