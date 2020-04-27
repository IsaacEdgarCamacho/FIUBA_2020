#include <stdio.h>

enum {ERROR, OK};

typedef struct tiempo{
    int horas;
    int minutos;
    int segundos;
}t_tiempo;

int crearTiempo(t_tiempo* t);
int mostrarTiempo(t_tiempo t);



int main(){

    t_tiempo t1;

    crearTiempo(&t1);

    mostrarTiempo(t1);
    t1.horas = 18;
    t1.minutos = 21;
    t1.segundos = 23;

    mostrarTiempo(t1);

    return 0;
}



int crearTiempo(t_tiempo* t){

    if(!t)
        return ERROR;

    t->horas = 0;
    t->minutos = 0;
    t->segundos = 0;

    return OK;
}


int mostrarTiempo(t_tiempo t){

    printf("hora = %d \n", t.horas);
    printf("minutos = %d \n",t.minutos);
    printf("segundos = %d \n", t.segundos);
    
    return OK;
}
