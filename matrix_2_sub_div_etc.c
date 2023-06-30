#include<stdio.h>
int main()
{
    int b=3;

    int ar1[2][b];
    int ar2[2][b];

    for (int i=0; i<2; i++)
        {
            for (int j=0; j<b; j++)
                {
                    printf("Enter Value For [%d] [%d] :",i,j);
                    scanf("%d",&ar1[i][j]);
                }  
        }

    for (int i=0; i<2; i++)
        {
            for (int j=0; j<b; j++)
                {
                    printf("Enter Value For [%d] [%d] :",i,j);
                    scanf("%d",&ar2[i][j]);
                }  
        }

    for (int i=0; i<2; i++)
        {
            for (int j=0; j<b; j++)
                {
                    printf("sum %d\t",ar1[i][j]+ar2[i][j]);
                } printf("\n");
        }
    for (int i=0; i<2; i++)
        {
            for (int j=0; j<b; j++)
                {
                    printf("sub=%d\t",ar1[i][j]-ar2[i][j]);
                } printf("\n");
        }
    for (int i=0; i<2; i++)
        {
            for (int j=0; j<b; j++)
                {
                   printf("Multi=%d\t",ar1[i][j]*ar2[i][j]);
                } printf("\n");
        }
    for (int i=0; i<2; i++)
        {
            for (int j=0; j<b; j++)
                {
                  printf("Div=%d\t",ar1[i][j]/ar2[i][j]);
                } printf("\n");
        }
    for (int i=0; i<2; i++)
        {
            for (int j=0; j<b; j++)
                {
                    printf("Modu=%d\t",ar1[i][j]%ar2[i][j]);
                } printf("\n");
        }
}