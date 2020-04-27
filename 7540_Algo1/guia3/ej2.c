#include <stdio.h>

#define MAX_STRING  80

int main(int argc, char* argv []){

    int hours = 0;
    char name[MAX_STRING];
    float   salary_bruto  = 0, salario_neto = 0, 
            impuesto_hacienda = 0, impuesto_seguro = 0;

    printf("\n enter the name of worker: ");
    fgets(name, sizeof(name),stdin);

    printf("\n enter the unmber of hours worked: ");
    scanf("%d", &hours );

    printf("\n enter the level salary: ");
    scanf("%f", &salary_bruto );

    impuesto_hacienda = (salary_bruto / 100) * 20;
    impuesto_seguro = (salary_bruto / 100) * 8;
    salario_neto = salary_bruto - impuesto_seguro - impuesto_hacienda;
    
    printf("\n name: %s  ", name);
    printf("\n salary bruto: %.3f  ", salary_bruto);
    printf("\n impuesto de hacienda: %.3f  ", impuesto_hacienda);
    printf("\n impuesto de hacienda: %.3f  ", impuesto_seguro);    
    printf("\n salario neto: %.3f  \n", salario_neto);

}