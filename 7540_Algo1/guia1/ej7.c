#include <stdio.h>

void main (void){
    int calif = 0,
        acum = 0;
    printf("add the calification one by one : \n ");
    do{
        scanf("%d",&calif);
        if (calif >= 0 && calif <= 100)
            acum += calif; 
    }while(calif<= 100 && calif >= 0);
    printf("the total of calification is = %d\n", acum);
}