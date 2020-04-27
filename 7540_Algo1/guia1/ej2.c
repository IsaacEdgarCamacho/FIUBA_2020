#include <stdio.h>

void main(void){
    int result = 0,
        resist = 0;

    printf("ingrese las resistencias y -1 para finalizar: \n");
    while (resist != -1){
        scanf("%d", &resist);
        if (resist != -1)
            result += resist;
    }
    printf("la suma del circuito de resistencias es : %d\n",result);
}