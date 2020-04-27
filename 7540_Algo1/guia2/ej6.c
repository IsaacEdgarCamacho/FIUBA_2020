#include <stdio.h>

#define NOVENTA 90

int main(){
    int angle = 0;

    printf("ingrese el angulo :");
    scanf("%d",&angle);

    if (angle < NOVENTA){
        printf("The angle is agudo ");
        return 1;
    }
    if (angle == NOVENTA){
        printf("The angle is recto ");
        return 1;
    }
    if (angle > NOVENTA){
        printf("The angle is obtuso ");
        return 1;
    }
    return 1;
}