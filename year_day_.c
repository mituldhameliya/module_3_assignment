#include<stdio.h>
int main()
{
    float days;
    float year;

    printf("enter days =");
    scanf("%f",&days);

    printf("enter year =");
    scanf("%f",&year);

    printf("%fdays =%f year\n",days,days/365);
    printf("%fyear =%fdays",year,year*365);


}