#include<stdio.h>

int main()
{
    float a,b,ans;
    char c;
    
    printf("Enter value of A :");
     scanf("%f",&a);
    printf("Enter value of B :");
    scanf("%f",&b);
    
    printf("Menu:\n");
    printf("+ For Addition\n");
    printf("- For Subtraction\n");
    printf("* For Multiplication\n");
    printf("/ For Division\n");
    printf("Enter your choice : ");
    scanf("%s", &c);
    
    switch (c)
    {
    case '+':
        ans=a+b;
        printf("%.2f\n",ans);
        break;
    case '-':
        ans=a-b;
        printf("%.2f\n",ans);
        break;
    case '*':
        ans=a*b;
        printf("%.2f\n",ans);
        break;
    case '/':
        if (b==0)
        {
            printf("Can't divide by 0");
        }
        else
        {
        ans=a/b;
        printf("%.2f\n",ans);
        }
        break;
        
    default:
        printf("Enter valid input\n");
        break;
        
    }
    
    
    //printf("%f %f",a,b);
    
}