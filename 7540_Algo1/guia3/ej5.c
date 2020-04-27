#include<stdio.h>
#include<string.h>

#define OK  1
#define MAX_STR 80

int main(int argc, char* argv[]){
    char string1[MAX_STR];

    strcpy(string1, "hola es la primera vez que uso strcpy \n \n");

    printf("%s", string1);

    for(int i = 0; string1[i] != '\0'; i++)
        printf("%c ", string1[i]);
    return OK;
}

