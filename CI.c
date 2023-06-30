#include<stdio.h>
#include<math.h>

int main()
{
float i,p,t;

printf("principal ammount :");
scanf("%f",&p);

printf("intrest :");
scanf("%f",&i);

printf("enter time duration in year :");
scanf("%f",&t);

float a=1+i/100;

float ci=p*pow(a,t);

printf("your CI = %f",ci);
}