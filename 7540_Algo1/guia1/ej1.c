#include <stdio.h>

int main(int argc, char* argv[]){

    float price = 0;

    printf("Enter the price of article: ");
    scanf("%f", &price);

    printf("The price whith discount of 25%% is: %.3f \n", (price/100)*75);
    return 0;
}

