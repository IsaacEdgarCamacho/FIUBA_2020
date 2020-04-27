#include<stdio.h>
#include<string.h>

#define OK  1
#define MAX_STR 80

int main(int argc, char* argv[]){
    char string1[MAX_STR];
    int j = 0;

    strcpy(string1, "hola es la primera vez que uso strcpy \n \n");

    printf("%s", string1);

    j = strlen(string1);

    for(j; j >= 0; j--)
        printf("%c", string1[j]);
    return OK;
}

