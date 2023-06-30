#include<stdio.h>

void ace (int *ar1, int b,int input)
    {   int temp;
        for (int i=0; i<b; i++)
            {
                for (int j=i+1; j<b; j++)
                    {
                        if(input == 0)
                        {
                            if (ar1[i]>ar1[j])
                            {
                                temp=ar1[i];
                                ar1[i]=ar1[j];
                                ar1[j]=temp;
                            }
                        }else if (input == 1)
                        {
                        
                            if (ar1[i]<ar1[j])
                            {
                            temp=ar1[i];
                            ar1[i]=ar1[j];
                            ar1[j]=temp;
                            }
                        
                        
                        }
                    }
            }
    }

int main()
{
    int b;
   
    int temp;
    int input;

    printf("Enter How Much You Wan't to Enter :");
    scanf ("%d",&b);

     int ar1[b];

    for (int i=0; i<b; i++)
        {
            printf("Enter Value : ");
            scanf("%d",&ar1[i]);

        }
    printf("Enter 0 for Ascending or 1 for Descending :");
    scanf("%d", &input);

    while (input != 0 && input != 1) {
        printf("Invalid input. Please enter 0 or 1: ");
        scanf("%d", &input);
    }
    ace(ar1,b,input);

    for (int i=0; i<b; i++)
        {
            printf("%d", ar1[i]);
        }
   

}