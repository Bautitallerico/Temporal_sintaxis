#include <stdlib.h>
#include <assert.h>
#include "String.h"

int main()
{
    // Test IsEmpty
    assert(IsEmpty(NULL) == true);
    assert(IsEmpty("") == true);
    assert(IsEmpty("Esto es una cadena") == false);

    // Tests para GetLength
    assert(GetLength("") == 0);
    assert(GetLength("abc") == 3);
    assert(GetLength("Hola Mundo") == 10);

    // Tests para AreEqual
    assert(AreEqual("", "") == true);
    assert(AreEqual("Hola", "Hola") == true);
    assert(AreEqual("Hola", "hola") == false);
    assert(AreEqual("UTN","UTNFRBA") == false); //testea el if del final
  
    //Test AreDecimalDigits
    assert(AreDecimalDigits("111")==true);
    assert(AreDecimalDigits("1a1")==false);
    assert(AreDecimalDigits("")==false);

    //Test Contains
    assert(Contains('U',"UTN") == true);
    assert(Contains('X',"UTN") == false);
    assert(Contains('A',"")==false);

    //Test ToInteger
    assert(ToInteger("123") == 123);
    assert(ToInteger("-123") == -123);

    //Test ContarUnaLetra
    assert(ContarUnaLetra("Hola",'a')==1);
    assert(ContarUnaLetra("Planeta",'i')==0);
    assert(ContarUnaLetra("ornitorrinco",'o')==3);
    
    
    return EXIT_SUCCESS;
}
