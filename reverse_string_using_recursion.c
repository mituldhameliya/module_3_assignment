#include <stdio.h>
#include <string.h>

void rev(char *a,int c,int b)
{   
    if (c>=b)
    {
       
        return ;
    }
    char d=a[b];
       a[b]=a[c];
       a[c]=d;
       
       rev(a, c + 1, b - 1);
}

int main()
{
    int b = 100;
    char a[b];

    printf("Enter: ");
    fgets(a, b, stdin);
    b = strlen(a);
    b=b-2;
   
    rev(a,0,b);
    
    printf("Reversed: %s",a);
}