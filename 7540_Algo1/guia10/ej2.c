/*
Construir una estructura de datos que represente a un automóvil. Un automóvil es una estructura que tiene los
siguientes atributos:

numeroDominio: el número de patente,
numeroMotor: número que trae grabado el motor,
marca: marca del automóvil
modelo: el modelo de automóvil
tamañoMotor: número que indica la potencia del motor.
color: el color de la carrocería

Escribir las siguientes funciones para manipular un automóvil como el definido en el ejercicio anterior:
· crearAuto: genera una instancia de tipo Automóvil con valores de inicialización adecuados para cada uno de
sus atributos.
· cambiarColor: modifica el valor del atributo color de un automóvil que recibe
· mostrarAuto: imprime todos los atributos de un automóvil en particular
· clonarAuto: es una función que reproduce un automóvil en otra variable de tipo Automóvil (función clone())
*/

#include<stdio.h>

#define MAX_CAD 80

enum {OK, ERROR};

struct automovil{
    int numeroDominio; // el número de patente,
    int numeroMotor; // número que trae grabado el motor,
    char marca[MAX_CAD]; //marca del automóvil
    char modelo[MAX_CAD]; // el modelo de automóvil
    int tamMotor;// número que indica la potencia del motor.
    char color[MAX_CAD] ;// el color de la carrocería
};


int cambiarColor(char* color, );
int mostrarAuto();
int clonarAuto ();


int main(void){



    return OK;
}