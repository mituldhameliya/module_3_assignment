#include<stdio.h>
int main ()
{
    int a=1;
    int b=0;

    for (int i=0; i<=5; i++)
        {
            for (int j=1; j<=i; j++)
                {
                    if(j%2==0)
                    {
                    printf(" %d",b);
                    }
                    else
                    {
                        printf(" %d",a);
                    }

                }
                printf("\n");
               
        }

}