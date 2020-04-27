#include <stdio.h>

enum bool{OK, ERROR};

int procesar (char* cadena, int* letras, int* num){
    int i = 0;
    *letras = *num = 0;

    while(cadena[i]){
        if ((cadena[i]>= 'A' && cadena[i] <= 'Z') || (cadena[i]>= 'a' && cadena[i] <= 'z') )
            *letras += 1;
        
        if (cadena[i]>= '0' && cadena[i] <= '9') 
            *num += 1;
        i++;
    }

}

int main(int argc, char* argv[]){

    char cadena[80];
    int letras = 0, num = 0;

    printf("ingrese un texto: ");
    scanf("%s", cadena);

    if(procesar(cadena, &letras, &num) == ERROR)
        return ERROR;

    printf("la cadena ingresada tiene: \n");
    printf("%d letras \n", letras);
    printf("%d numeros \n", num);

    return 1;
}
