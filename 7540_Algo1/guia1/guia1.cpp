#include "guia1.h"

long factorial(long arg){

    long num = 1;

    if (arg < 0)
        return ERROR;
    if (arg == 0)
        return 1;
        
    do{
        num *= arg;
        arg--;
    }while (arg > 0);

    return num;
}