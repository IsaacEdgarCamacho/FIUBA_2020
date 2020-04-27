#include<stdio.h>

enum bool {OK, ERROR};

#define MAX_CAD 80
#define MULTA 2

int main(int argc, char* argv[]){

    char name[MAX_CAD];
    char name_movies[MAX_CAD];
    int dias_retraso = 0;

    printf("VIDEOCLUB 1.0 \n\n");

    printf("\n enter the name of user : ");
    fgets(name, sizeof(name), stdin);
    
    printf("\n enter the name of movies : ");
    fgets(name_movies, sizeof(name), stdin);
    
    printf("\n dias de retrazo : ");
    scanf("%d", &dias_retraso);

    printf("\n\n\n");
    printf("\n user : %s", name);
    printf("\n nombre  del al peli : %s", name_movies);
    printf("\n dias de retraso: %d", dias_retraso);
    printf("\n multa: %d \n\n", dias_retraso * MULTA);
    return OK;
}