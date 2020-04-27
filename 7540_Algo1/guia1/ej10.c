#include<stdio.h>

int revatted(int);

int main(){
    int arg = 0;

    printf("enter the number to be revatted: ");
    scanf("%d",&arg);

    printf("\n %d \n",revatted(arg));
    return 1;
}

int revatted(int arg){
    int resto = 0,
        revat = 0;
    do{
        resto = arg % 10;
        arg -= resto;
        arg = arg / 10;
        revat += resto;
        if (arg > 0){
            revat *= 10;
        }
    }while(arg > 0);

    return revat;
}