#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

#include "String.h"

int main()
{

    assert(IsEmpty(NULL) == 1);

    assert(IsEmpty("") == 1);

    assert(IsEmpty("Esto es una cadena") == 0);

//Propuesta

    // Tests para GetLength
    assert(GetLength("") == 0);
    assert(GetLength("abc") == 3);
    assert(GetLength("Hola Mundo") == 10);
    
    // Tests para GetLength
    assert(AreEqual("", "") == 1);
    assert(AreEqual("Hola", "Hola") == 1);
    assert(AreEqual("Hola", "hola") == 0);
    
    return EXIT_SUCCESS;
}
