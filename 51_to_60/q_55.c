// Write a program to printf sum of even number from 1 to N

#include<stdio.h>

int main(){
    int n;
    printf("Enter ending number : ");           scanf("%d",&n);
    int sum=0;
    for(int i=2;i<=n;i+=2){
        sum+=i;
    }
    printf("sum of even number = %d",sum);
}