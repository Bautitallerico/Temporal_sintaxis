#include <stdio.h>
#include "String.h"
/*solo funciona en base 10*/
int main(int argc, char *argv[])
{
    int suma = 0;

    for (char **p = argv + 1; *p != NULL; p++)
    {
        suma += ToInteger(*p);
    }

    printf("%d\n", suma);

    return 0;
}
