#include <stdio.h>
#include <string.h>

#define MAX_CAD 80

int main(int argc, char* argv[]){

    char cadena[MAX_CAD];


    printf("ingrese una cadena : ");
    scanf("%s", cadena);
    printf("la cadena ingresada es: %s \n\n", cadena);


    printf("ingrese otra cadena:");
    fgets(cadena, sizeof(cadena), stdin);  // read string

    printf("la cadena ingresada es: %s \n\n", cadena);


    return 0;
}