
#include<stdio.h>

void main(){

    int num ;
    printf("Enetr the number : ");
    scanf("%d",&num);

    switch (num)
    {
    case 1 :
        printf("Today is Monday...");
        break;
    case 2 :
        printf("Today is Tuesday...");
        break;
    case 3 :
        printf("Today is Wednesday...");
        break;
    case 4 :
        printf("Today is Thursday...");
        break;
    case 5 :
        printf("Today is Friday...");
        break;
    case 6 :
        printf("Today is saturday...");
        break;
    default:
        printf("It's Holiday...");
        break;
    }
}