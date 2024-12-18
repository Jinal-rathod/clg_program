// Write a program to printf sum of odd number from 1 to N

#include<stdio.h>

int main(){
    int n;
    printf("Enter ending number : ");           scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i+=2){
        sum+=i;
    }
    printf("sum od odd number = %d",sum);
}