#include<stdio.h>

#define FIRST   32
#define SECOND  63
#define THIRD   95


int main(){
    int credits = 0;

    printf("enter credits of the student =  ");
    scanf("%d", &credits);
    if (credits <= FIRST){
        printf("grade for student is 1º\n");
        return 1;
    }

    if (credits > FIRST && credits <= SECOND){
        printf("grade for student is 2º\n");
        return 1;
    }

    if (credits > SECOND && credits <= THIRD){
        printf("grade for student is 3º\n");
        return 1;
    }    

    if (credits > THIRD){
        printf("grade for student is 4º\n");
        return 1;
    }
    return 1;
}
