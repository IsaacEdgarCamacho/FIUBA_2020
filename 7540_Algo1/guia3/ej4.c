#include<stdio.h>
#include<string.h>

#define MAX_CADENA  80



int main(int agrc, char* argv[]){

    char str1 [MAX_CADENA] = "la cadena no esta vacia";
    char str2 [MAX_CADENA] = "";

    printf("PROGRAMA PARA DETERMINAR SI UNA CADENA ESTA VACIA O NO \n\n");


    if (str1[0] == '\0')
        printf("\n la cadena str1 esta vacia\n");
    else
        printf("\n la cadena str1 no esta vacia \n");

    
    
    if (strcmp(str1, str2) == 0)
        printf("\n la cadena esta str2 vacia \n");
    else
        printf("\n la cadena str2 no esta vacia \n");

    return 0;
}