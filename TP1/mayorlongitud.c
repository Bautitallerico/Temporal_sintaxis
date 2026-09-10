#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        return 0;
    }

    // Guardo el primer argumento como el mayor
    char *mayor = argv[1];

    // argv + 2 porque argv[1] ya está guardado en mayor
    for (char **p = argv + 2; *p != NULL; p++)
    {
        // Comparo longitud actual con el mayor
        if (GetLength(*p) > GetLength(mayor))
        {
            // actualizo el mayor
            mayor = *p;
        }
    }

    
    printf("%s\n", mayor);

    return 0;
}
