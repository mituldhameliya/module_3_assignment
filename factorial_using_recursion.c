#include<stdio.h>

int fact (int a)
{
    if (a == 0 || a==1)
    {
        return 1;
    }
    return a * fact(a-1);
}
int main()
{

    int a;
    

    printf("Enter value :");
    scanf("%d",&a);

    int b=fact(a);
    
    printf("%d\n",b);

}
