#include <stdio.h>
#include <ctype.h>
// Definimos const char para que la funcion solo lea la cadena y no la modifique
/*
Precondicion: Un puntero a una cadena de caracteres
Postcondicion: Devuelve "1" si la cadena es vacia; devuelve "0" si la cadena no es
vacia
*/
int IsEmpty(const char *str)
{
    // Si el puntero es NULL o el primer carácter es el terminador nulo '\0'
    if (str == NULL || str[0] == '\0')
    {
        return 1;
    }
    return 0;
}

//Propuesta

#include "String.h"

   //Implementación Recursiva: 

int GetLength(const char *str) {
    if (str[0] == '\0') {
        return 0;
    }
    return 1 + GetLength(str + 1);
}

//funcion AreEqual
int AreEqual (const char *str1, const char *str2)
{
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0' ; i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
    }
    if(str1[i] == str2[i]){
        return 1;
    }
    return 0;
}