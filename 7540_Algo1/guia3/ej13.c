#include<stdio.h>


int main(int argc, char* argv[]){

    int num = 0;
    char cadena[80];

    printf("ingrese un numero entero: ");
    scanf("%d", &num);

    sprintf(cadena, "el numero es ", &num);

    printf("\n %s",cadena );

    return 0;
}