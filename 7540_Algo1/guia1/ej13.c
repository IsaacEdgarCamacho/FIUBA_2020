#include<stdio.h>

#define ERROR   -1
#define OK      0


int main(int argc, char* argv[]){

    int cant_nums = 0,
        acum = 0,
        counter = 0,
        num = 0;

    while(cant_nums <= 0){
        printf("enter a number of numbers: ");
        scanf("%d", &cant_nums);
    }
    printf("enter a secuence of numbers: ");
    do{
        scanf("%d", &num);  
        acum += num;
        counter++;

    }while(--cant_nums > 0);

    printf("el promedio es %.3e \n", (float)acum / (float)counter);
    return OK;
}