#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a1,a2,judge;
    printf("Rolling the dice...\n");

    srand(time(NULL));

    a1=rand()%6+1;
    a2=rand()%6+1;

    printf("Die 1: %d\n",a1);
    printf("Die 2: %d\n",a2);
    judge = a1+a2;

    printf("Total value: %d\n",judge);
    if(judge>7){
        printf("you won\n");
    }
        else {
        printf("you lost\n");
        
    }





    

}