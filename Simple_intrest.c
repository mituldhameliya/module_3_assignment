#include <stdio.h>
int main()
{
    int p,i,t;

    printf("Enter principal amount= ");
    scanf("%d",&p);

    printf("Enter annual intrest= ");
    scanf("%d",&i);

    printf("enter time in year= ");
    scanf("%d",&t);

    printf("your SI is %d\n",p*i*t/100);

}