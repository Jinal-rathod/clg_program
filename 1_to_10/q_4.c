//compute and find value of x

#include<stdio.h>

void main(){
    int a,b,c;
    float x;
    printf("Enter any number for a : ");
    scanf("%d",&a);
    printf("Enter any number for b : ");
    scanf("%d",&b);
    printf("Enter any number for c  : ");
    scanf("%d",&c);
    x=a/(b-c);
    printf("%.2f",x);
}