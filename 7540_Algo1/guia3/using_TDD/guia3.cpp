#include "guia3.h"

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

/*********************************************/
/* ejercicio 9  de la guia test de palindromo*/
int palindromo(char* cadena){
    char aux[MAX_STR];
    int size = 0, j = 1;

    if (!cadena)
        return ERROR;

    size = strlen(cadena);

    for(int i = 0; i < size; i++){
        aux[i] = cadena[size - j];
        j++;
    }
    
    aux[size] = '\0';

    printf("%s, %s", cadena, aux);
    return (strcmp(cadena, aux) == 0)? OK: ERROR;
}


