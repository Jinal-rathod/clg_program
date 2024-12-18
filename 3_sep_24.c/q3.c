
#include<stdio.h>

int main(){

    int time;
    printf("Enter the time : ");
    scanf("%d",&time);

    if(time<12){
        printf("* Good Morning *");
    }else if(time<18){
        printf("* Good Afternoon *");
    }else{
        printf("* Good Night *");
    }
}