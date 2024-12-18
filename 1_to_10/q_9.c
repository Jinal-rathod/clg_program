//addition,subtraction,divition,multiplication,modulo division(int num)

#include<stdio.h>

void main(){
    int a,b,add,sub,div,mul,mod;
    printf("Enter any munber for a : ");
    scanf("%d",&a);
    printf("Enter any munber for b : ");
    scanf("%d",&b);

    add=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    mod=a%b;
    printf("Addition of two number : %d\nSubtraction of two number : %d\nDivition of two number : %d\n",add,sub,div);
    printf("multiplication of two number : %d\nmodulos two number : %d",mul,mod);
}