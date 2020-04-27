#include <stdio.h>

enum STATUS{OK, ERROR = -1};

int main(int argc , char* argv[]){

    int flag = ERROR;

    if (flag == ERROR)
        printf("This is false : %d", flag);
    return OK;
}