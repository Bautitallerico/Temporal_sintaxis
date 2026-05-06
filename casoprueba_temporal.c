#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

#include "String.h"

int main()
{

    assert(IsEmpty(NULL) == 1);

    assert(IsEmpty("") == 1);

    assert(IsEmpty("Esto es una cadena") == 0);

    return EXIT_SUCCESS;
}