// write an odd number from 1 to N 

#include<stdio.h>

int main(){
    int n;
    printf("Enter any ending number : ");           scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        printf("Odd number is : %d\n",i);   
    }
}