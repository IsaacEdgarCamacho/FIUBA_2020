#include<stdio.h>
#include<string.h>


#define MAX_STR 80
#define OK  1

int main(int argc, char* argv[]){
    char string1[MAX_STR];
    int nuevo = 0, viejo  = 0 ;

    printf("\n ingrese una cadena : ");
    fgets(string1, sizeof(string1), stdin);
    
    printf("\n INGRESE UN VIEJO CARACTER \n");
    scanf("%d", &viejo);

    printf("\n INGRESE UN NUEVO CARACTER \n");
    scanf("%d", &nuevo);

    for(int i = 0;  i< strlen(string1); i++){
        if (string1[i] == viejo)
            string1[i] = nuevo;
    }

    printf("%s", string1);


    return OK;
}

