#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ERROR -1
#define OK     1


int getParam(double*);
double processParm(double parameter);
void show(double);


int main(int argc, char* argv[]){

    double  parameter = 0,
            paramResult = 0;
    int result = 0;

    result = getParam(&parameter);
    if(result == ERROR){
        printf("The enter of number was incorrect!! \n");
        return ERROR;
    }

    paramResult = processParm(parameter);

    show(paramResult);

    return 0;
}

int getParam(double* p){

    printf("enter the number to process: ");
    scanf("%lf", p);

    return OK;
}
double processParm(double parameter){
    return sqrt(parameter);
}
void show(double p){

    printf("resulted = %lf", p);
}
