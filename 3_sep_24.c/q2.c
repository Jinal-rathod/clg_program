
#include<stdio.h>

int main(){

    int num ;
    printf("Enter any number : ");
    scanf("%d",&num);
    if(num>0){
        printf("This  number is positive...");
    }else if(num<0){
        printf("This number is negative...");
    }else{
        printf("This number is nutural");
    }
}