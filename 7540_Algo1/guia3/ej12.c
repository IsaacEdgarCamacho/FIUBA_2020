#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char* argv []){

    float num = 0;
    char cadena[50];

    printf("enter a float number: ");
    scanf("%f", &num);

    printf("\n el numero ingresado es: %.3f \n", num);

    /*guardo la salida en cadena en lugar de mandarlo al stdout*/
    sprintf(cadena,"la string is: %.3f \n", num);

    printf("\n el buffer: %s",cadena);
    return 0;
}