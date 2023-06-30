#include<stdio.h>
int main()
{
    int a,b;

    printf("enter value of A=");
    scanf("%d",&a);

    printf("enter value of B=");
    scanf("%d",&b);

    int sum=a+b;
    int subtraction=a-b;
    int Multiplication=a*b;
    int Division=a/b;
    int Modulus=a%b;

    printf("sum=%d\n",sum);
    printf("subtraction=%d\n",subtraction);
    printf("Multiplication=%d\n",Multiplication);
    printf("Division=%d\n",Division);
    printf("Modulu=%d\n",Modulus);

}