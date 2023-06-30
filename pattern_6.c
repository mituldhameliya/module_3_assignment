#include<stdio.h>
int main()
{
    for (int i=1; i<=11; i++)
        {
            if(i<=5)
            {
                for (int a=1; a<=i; a++)
                    {
                        printf(" *");
                    }
               
                    printf("\n");
                
            }
            if (i>5)
            {
               for (int b=6; b>=i-5; b--)
                    {
                        printf(" *");
                    }
                printf("\n");
            }
           
        }
}