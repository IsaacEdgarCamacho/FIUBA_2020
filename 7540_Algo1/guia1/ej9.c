#include<stdio.h>

int main(void){
    int arg = 0,
        rest = 0;

    printf("Enter a number : ");
    scanf("%d",&arg);

    do{
        --arg;
        rest = arg % 2;
        if (rest != 0 )
            printf("%d ", arg);

    }while(arg > 0);

    return 0;
}