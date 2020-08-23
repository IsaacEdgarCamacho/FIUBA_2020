#include "tp0.h"

/* *****************************************************************
 *                     FUNCIONES A COMPLETAR                       *
 *         (ver en tp0.h la documentación de cada función)         *
 * *****************************************************************/

void swap (int *x, int *y) {

    int aux = *x;

    *x = *y;
    *y = aux;
}


int maximo(int vector[], int n) {
    if (vector == NULL)
        return -1;
    
    int max = 0;
    for(int i=0; i < n; i++){
        if(vector[max] < vector[i])
            max = i;
    }

    return max;
}


int comparar(int vector1[], int n1, int vector2[], int n2) {

    int result = 0;
    int i = 0;

    while(i < n1 && i < n2 && vector1[i] == vector2[i])
        i++;

    
    if(i < n1 && (i == n2 || vector1[i] > vector2[i]))
        result = 1;

    if(i == n1 && i == n2)
        result = 0;


    if(i < n2 && (i == n1 || vector1[i] < vector2[i]) )
        result = -1;    

    return result;
}


void seleccion(int vector[], int n) {

    
}
