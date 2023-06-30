#include<stdio.h>
int main()
{
    int b=5;
    int c;
    int et=0;
    int ot=0;
    int se=0;
    int so=0;
    for(int i=1; i<=b; i++)
    {
        printf("Enter number :");
        scanf("%d",&c);
        if (c % 2 == 0)
        {
            se+=c;
            et++;
        }   
        if (c % 2 !=0)
            {
                so+=c;
                ot++;
            }
    }
    printf("Total Even number is : %d\n",et);
    printf("Total Odd number is : %d\n",ot);
    printf("Sum Of Even number is : %d\n",se);
    printf("Sum Of Odd number is : %d\n",so);
}