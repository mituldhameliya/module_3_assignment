#include<stdio.h>
int main()
{
    int a;
    int b=0;
    int c=1;
    int d;

    printf("Enter No. :");
    scanf("%d",&a);
    // printf("%d,",b);
    // printf("%d,",c);

    for (int i=0; i<=a; i=(b+c))
        {
            //d=b+c;
            
            printf("%d,",i);
            b=c;
            c=i;
           
        }
    
}