#include<stdio.h>
int main()
{
    float a,b;
    char ch;

    printf("enter value of A =");
    scanf("%f",&a);

    printf("enter value of B =");
    scanf("%f",&b);

    fflush(stdin);
    printf("enter char=");
    scanf("%c",&ch);

   /*float sum=a+b;
    float sub=a-b;
    float mullti=a*b;
    float div=a/b;
    float modu=a%b;
    */
  /* char  sum='+';
   char sub='-';
   char multi='*';
   char div ='/';
   char modu='%';
   */
   

    switch (ch)
    {
        case '+':
        printf("sum is =%f",a+b);
        break;

        case '-':
        printf("sub is =%f",a-b);
        break;

        case '*':
        printf("multi is =%f",a*b);
        break;

        case '/':
        printf("div is =%f",a/b);
        break;

        case '%':
        printf("modu is =%f",a % b);
        break;

        default:
        printf("enter valid input");

    }

}