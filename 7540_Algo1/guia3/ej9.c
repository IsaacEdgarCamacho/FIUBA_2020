#include <stdio.h>
#include <string.h>


#define TRUE   1   
#define FALSE  -1
#define MAX_STR 250

int ingresarCadena(char*);
int test_palindromo(char*);

int main(int argc, char* argv[]){

    char cadena[MAX_STR];
    ingresarCadena(cadena);

    if(test_palindromo(cadena) == TRUE)
        printf("el texto es un palindromo \n\n");
    else
        printf("el texto no es un palindromo \n\n");

}

int ingresarCadena(char* cadena){
    
    if (!cadena)
        return FALSE;
    
    printf("\n ingrese una cadena: ");
    fgets(cadena, MAX_STR, stdin);

    return TRUE;

}

int test_palindromo(char* cadena){
    char aux[MAX_STR];
    int size = 0;

    if (!cadena)
        return FALSE;

    size = strlen(cadena);

    for(int i = 1; i < size; i++)
        aux[i -1] = cadena[size - i];

    aux[size] = '\0';

    printf("%s, %s", cadena, aux);
    return (strcmp(cadena, aux) == 0)? TRUE: FALSE;
}


