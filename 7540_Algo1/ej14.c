/*
El valor aproximado del número de Euler, e , se puede obtener con la siguiente fórmula:
 e = 1 + 1/1! + 1/2! + 1/3! + ¼! + 1/5! + ...      
 Escribir un programa que calcule el valor aproximado de e mediante un ciclo 
 repetitivo que termine cuando la diferencia entre dos aproximaciones 
 sucesivas difiera en menos de 10*e-9. Parametrizar adecuadamente el software desarrollado.
*/

#include <stdio.h>

int factorial(int n){
    
    if(n <= 0 || n == 1)
        return 1;
    
    return n * factorial(n-1);
}

void main(void){

    int algunNumero = 0;
    printf("ingres un numero natural :");
    scanf("%d", &algunNumero);
    printf("el factorial de %d es %d \n", algunNumero, factorial(algunNumero));
}