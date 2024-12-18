//addition,subtraction,divition,multiplication(real num)

#include<stdio.h>

void main(){
    float a,b,add,sub,div,mul,mod;
    printf("Enter any munber for a : ");
    scanf("%f",&a);
    printf("Enter any munber for b : ");
    scanf("%f",&b);

    add=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    printf("Addition of two number : %.2f\nSubtraction of two number : %.2f\nDivition of two number : %.2f\n",add,sub,div);
    printf("multiplication of two number : %.2f",mul);
}