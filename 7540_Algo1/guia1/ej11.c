#include <stdio.h>

int  main(){
    int cantidad = 0,
        max = 0,
        min = 0,
        arg = 0;

    printf("enter the cantidad = ");
    scanf("%d",&cantidad);

    
    for (int i = 0; i < cantidad; i++){
        scanf("%d",&arg);
        if (i == 0){
            max = min = arg;
        }
        if (max < arg)
            max = arg;
        if (min > arg)
            min = arg;
    }
    printf("The maximun is %d and the minimun is %d",max,min);

    return 1;
}