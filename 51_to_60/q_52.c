// Write an all even number from 1 to N 

#include<stdio.h>

int main(){
    int n;
    printf("Enter any endung number : ");           scanf("%d",&n);
    for(int i=2;i<=n;i+=2){
        printf("Even number is : %d\n",i);
    }
}