#include<stdio.h>
#include<string.h>

int main()
{

    char a[100];
    char b[100];

    printf("Enter : ");
    fgets(a,strlen(a-1),stdin);
    //scanf("%s",&a);

    strcpy(b,a);

    strrev(b);

    if (strcmp(a,b)==0)
        {
            printf(" %s is palindrom.",a);
        }
    else
        {
            printf(" %s is not palindrom.",a);
        }

}