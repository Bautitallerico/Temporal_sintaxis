#include<stdio.h>
#include"String.h"

int main(int argc, char  *argv[]){

    for(char **p = argv + 1; *p != NULL; p++){
        printf("%s\n", *p);
    }

    return 0;
}
