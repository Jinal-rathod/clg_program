
#include<stdio.h>

int main(){

     int doorcode;
    int code=123456;
     printf("Enter the door code : ");
     scanf("%d",&doorcode);

    if(doorcode==code){
        printf("Door is opne ........");
    }else{
        printf("Code is incorrect........\nplease enter the correct code !!!");
    }
}