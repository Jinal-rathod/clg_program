// Write a program to print sum of number from 1 to N

#include<stdio.h>

int main(){
    int n;
    printf("Enter any ending number : ");       scanf("%d",&n);
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
        printf("sum of all number : %d",sum);
}