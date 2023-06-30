#include<stdio.h>
int main()
{
    int day;

    printf("enter the number for day =");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("day is monday");
        break;

        case 2:
        printf("day is Tuesday");
        break;

        case 3:
        printf("day is Wednesday");
        break;

        case 4:
        printf("day is Thursday");
        break;

        case 5:
        printf("day is Friday");
        break;

        case 6:
        printf("day is Saturday");
        break;

        case 7:
        printf("day is Sunday");
        break;

        default :
        printf("enter valid number");

    }
}