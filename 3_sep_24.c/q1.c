
#include<stdio.h>

int main(){

    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("You are eligible for give an vote.");
    }else{
        printf("You are not eligible for give an vote.");
    }
}