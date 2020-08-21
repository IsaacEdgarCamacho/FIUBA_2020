/*
14) El valor aproximado del número de Euler, e , se puede obtener con la siguiente fórmula:
e = 1 + 1/1! + 1/2! + 1/3! + 1⁄4! + 1/5! + ...
Escribir un programa que calcule el valor aproximado de e mediante un ciclo repetitivo que termine
cuando la diferencia entre dos aproximaciones sucesivas difiera en menos de 10*e-9. Parametrizar
adecuadamente el software desarrollado.
*/

#include<stdio.h>
/*
Vamos a resolver el ejercicio, diseñando una funcion recursiva factorial y luego haciendo un bucle que acumule la aproximacion
del numero de euler.
*/
int factorial(int n){
    if(n == 0 || n < 1)
        return 1;

    return n * factorial(n-1);
}

int main(void){

    float   e = 1.0f,
            e1 = 0.0f,
            e2 = 1.0f; 
    int n = 1;
    float limite = 0.000000001f;
    
    while( n <= 10) { //inicialmente hago 10 iteraciones pero deberia detenerse cuando e2 - e1 < limite
        e1 = e2;
        
        e2 = (float) 1 / factorial(n++);
        printf("%.10f %d\n", e2 - e1 , n);
        
        e = e + e2;
    };

    printf("El numero e es %.10f \n", e);
    return 0;
}