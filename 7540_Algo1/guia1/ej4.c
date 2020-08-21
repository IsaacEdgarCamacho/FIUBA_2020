#include<stdio.h>
#include<math.h>
#define PI  3.14
#define e   2.71

int main(int argc, char* argv[]){

    float   normal = 0,
            s = 0,
            x = 0,
            m = 0;

    if(argc < 3)
        printf("faltan datos \n");

    if(s == 0)
        printf("no se puede dividir por cero! \n");
    
    normal = (1/(s* sqrt(2*PI))) * pow(e,(-0.5*(x-m)/s)) ;
    printf("la normal es %.3f",normal);
    
    return 0;
}