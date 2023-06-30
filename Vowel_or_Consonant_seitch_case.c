#include<stdio.h>
int main()
{
    char ch;

    printf("enter alphabet=");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("alphabet is vovel");
        break;

        default:
        printf("consonant");


    }

}