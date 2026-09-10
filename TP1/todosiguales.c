#include<stdio.h>
#include<stdbool.h>
#include"String.h"

int main (int argc, char *argv[]){

    if(argc<=2){
        printf("1\n");
        return 0;
    }

    char *firstArgu = *(argv + 1);

    for(char **p = argv + 2; *p != NULL; p++){
        if(AreEqual(firstArgu, *p)==false){
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");
    return 0;
}

