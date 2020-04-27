#include<stdio.h>

long factorial(long arg){

    long num = 1;
    do{
        num *= arg;
        arg--;
    }while (arg > 0);

    return num;
}
/*
int main(void){
    long result = 1,
        arg = 0;

    printf("add a number for calculate the factorial\n");
    scanf("%ld", &arg);

    if(arg <= 0){
        if(arg == 0)
            printf("factorial of %ld es 1 \n", arg);
        else
            printf("non exist factorial \n");
        
        return -1;
    }

    result = factorial(arg);

    printf("factorial is = %ld \n",result);
    return 0;
}*/