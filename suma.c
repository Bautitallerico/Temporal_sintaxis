#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[])
{
    int suma = 0;

    for (char **p = argv + 1; p < argv + argc; p++)
    {
        suma += ToInteger(*p);
    }

    printf("%d\n", suma);

    return 0;
}
