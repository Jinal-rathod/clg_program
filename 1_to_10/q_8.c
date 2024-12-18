//average of two real number 

#include<stdio.h>

void main(){
    float x,y,arg;
    printf("Enter value of x : ");
    scanf("%f",&x);
    printf("Enter value of y : ");
    scanf("%f",&y);
    arg=(x+y)/2;
    printf("Average of two real number : %.2f",arg);
}