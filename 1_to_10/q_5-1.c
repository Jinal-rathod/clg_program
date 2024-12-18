//convert the temprature
//(1). from celsisus to fahrenheit

#include<stdio.h>

void main(){
    float c,f;
    printf("Enter the celsius : ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("fahrenheit is : %.2f",f);
}

