#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef enum {MAYUSCULAS, MINUSCULAS} tformato;

#define MAX_STR 80
#define OK  1

int main(int argc, char* argv[]){
    char string1[MAX_STR];
    int option = 0;

    printf("\n ingrese una cadena : ");
    fgets(string1, sizeof(string1), stdin);
    
    printf("\n elija una opcion \n");
    printf("0 MAYUSCULAS \n");
    printf("1 MINUSCULAS \n");
    
    scanf("%d", &option);

    switch (option){
        case MAYUSCULAS:
            for(int i = 0; i< strlen(string1);i++)
                printf("%c", toupper(string1[i]));
            break;
        case MINUSCULAS:
            for(int i = 0; i< strlen(string1);i++)
                printf("%c", tolower(string1[i]));        
        default:
            break;
    }
    return OK;
}

