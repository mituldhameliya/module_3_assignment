#include <stdio.h>

int main()
{
    int p,t;
    float i;

    printf("entere principal amount=");
    scanf("%d",&p);

    printf("enter intrest =%%");
    scanf("%f",&i);

    printf("enter year=");
    scanf("%d",&t);

    printf("your SI is =%f\n",p*i*t/100);

}