#include <stdio.h>

enum{OK, ERROR};

char upperCase(char);
char lowerCase(char);


int main(int argc, char * argv[]){

    FILE*   arch1 = fopen(argv[1], "r+b");
    FILE*   arch2 = fopen(argv[2], "w+b");
    char a = 0,
        b = 0;

    fread(&a, sizeof(char), 1, arch1);

    printf("%c",a);    


    while(!feof(arch1)){

        printf("%c",a);
        b = upperCase(a);
        fwrite(&b, sizeof(char), 1 ,arch2);
        fread(&a, sizeof(char), 1, arch1);
    }


    fclose(arch1);
    fclose(arch2);
    
    return OK;
}



char upperCase(char c){

    if (c < 'a' && c > 'z')
        return c;

    return c-32;
}

char lowerCase(char c){

    if (c < 'A' && c > 'Z')
        return c;

    return c+32;
}