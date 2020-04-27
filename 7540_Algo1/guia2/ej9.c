#include <stdio.h>

enum codig_fabricante{NINGUNO, TRES_M_CORPORATION, MAXELL_CORPORATION, SONY_CORPORATION, BERBATIN_CORPORATION};

int main(int argc, char* argv[]){

    int codigo = 0;
    
    printf("Enter the code corporation : ");
    scanf("%d", &codigo);

    switch (codigo){
        case TRES_M_CORPORATION:
            printf("TRES_M_CORPORATION \n");
            break;
        case MAXELL_CORPORATION:
            printf("MAXELL_CORPORATION \n");
            break;
        case SONY_CORPORATION:
            printf("SONY_CORPORATION \n");
            break;
        case BERBATIN_CORPORATION:
            printf("BERBATIN_CORPORATION \n");
            break;
        
        default:
            printf("sorry, the code is invalid!! \n");
            break;
    }
    return 1;
}