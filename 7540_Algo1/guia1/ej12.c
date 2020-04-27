#include <stdio.h>

#define ERROR   -1
#define OK      0


int main(int argc, char* argv[]){

    int cant_numbers = 0,
        num = 0,
        max = 0,
        min = 1,
        i = 0;

    while (cant_numbers <= 0){
        printf("enter a quiantity numbers a compare: ");
        scanf("%d",&cant_numbers);
    }
    printf("now enter the rest a numbers: ");

    
    do{
        scanf("%d",&num);
        
        if (i == 0)
            max = min = num;
    
        if (max <= num) max = num;
        
        if (min >= num) min = num;

    }while(++i < cant_numbers);

    printf("the maximun number is:  %d and the minimun number is : %d \n", max, min);
    return OK;
}