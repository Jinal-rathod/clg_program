//convert the temprature
//(2). from fahrenheit to celsisus

#include<stdio.h>

void main(){
    float c,f;
    printf("Enter the celsius : ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("fahrenheit is : %.2f",c);
}