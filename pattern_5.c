#include<stdio.h>
int main ()
{

    for (int i=1; i<=5; i++)
        {
           for (int j=10; j>=i; j--)
            {
                printf("  ");
            }
            for (int l=1; l<=2*i-1; l++)
                {
                    printf(" *");
                }
            printf("\n");
        }
}