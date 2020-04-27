#include<stdio.h>

#define OK      0
#define ERROR   -1

typedef float tipodato;
enum tescala{CELCIUS, FAHRENHEIT};


int main(int argc, char* argv[]){

    int escala = 0;
    float   result = 0.0,
            temperatura = 0.0;

    printf("ingrese la escala de temperatura: \n");
    printf("\t%d celcius \n", CELCIUS);
    printf("\t%d fahrenheit \n",FAHRENHEIT);

    scanf("%d",&escala);
    switch (escala){
        case CELCIUS:
            printf("ingrese la temperatura: ");
            scanf("%f", &temperatura);
            result = ( temperatura * 1.8 ) + 32.0;
            printf("%f celcius = %f fahrenheit\n",temperatura,result);
            break;
        case FAHRENHEIT: 
            printf("ingrese la temperatura: ");
            scanf("%f", &temperatura);
            result = (temperatura - 32.0)/1.8;
            printf("%f farenheit = %f celcius\n",temperatura,result);
            break;
        default:
            printf("LA OPCION NO ES CORRECTA\n");
            break;
    }


    return OK;
}