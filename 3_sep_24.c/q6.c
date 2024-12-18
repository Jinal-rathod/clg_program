
#include<stdio.h>

int main(){

    int like;
    printf("yes(1)  no(2)\nDo you like study : ");
    scanf("%d",&like);

    switch(like){

        case 1 :
            printf("You are go to library >>>");
            break;
        case 2 :
            printf("You are go to palygaround >>>");
        default :
            printf("You are go to library or palygaround <<<");
   }
}



