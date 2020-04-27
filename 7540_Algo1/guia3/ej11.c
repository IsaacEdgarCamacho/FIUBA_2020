#include<stdio.h>
#include<string.h>
#include<math.h>

#define OK  1
#define MAX_STR 80

int main(int argc, char* argv[]){

    char entero[MAX_STR];
    char flotante[MAX_STR];
    int num_entero = 0;
    float num_float = 0;

    printf("\n ingrese dos numeros:");
    fgets(entero, MAX_STR, stdin);

    printf("\n ingrese dos numeros:");
    fgets(flotante, MAX_STR, stdin);
    printf("los datos ingresados son %s, %s \n", entero, flotante);

    num_entero = atoi(entero);
    num_float = atof(flotante);

    printf("float = %f \n entero = %d",num_float, num_entero);

    if (num_entero == num_float)
        printf("\n son iguales");
    else
        printf("\n son de¡istintos");

    return OK;
}