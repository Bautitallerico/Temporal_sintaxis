#include <stdbool.h>
#include <stdio.h>
#include "String.h"

// Funcion IsEmpty
// Precondicion: Un puntero a una cadena de caracteres
// Postcondicion: Devuelve "1" si la cadena es vacia; devuelve "0" si la cadena no es vacia
bool IsEmpty(const char *str)
{
    // Si el puntero es NULL o el primer carácter es el terminador nulo '\0'
    if (str == NULL || *str == '\0')
    {
        return true;
    }
    return false;
}

// Funcion GetLength - Implementación Recursiva:
// Precondición: 'str' debe ser un puntero válido a una cadena de caracteres terminada en el carácter nulo ('\0').
// Poscondición: Retorna un número entero (int) que representa la cantidad de caracteres de la cadena, sin contar el terminador nulo.
int GetLength(const char *str)
{
    if (*str == '\0')
    {
        return 0;
    }
    return 1 + GetLength(str + 1);
}

// funcion AreEqual
// precondicion: str1 y str2 son punteros a cadenas válidas terminadas en '\0'.
// postcondición:Retorna true solo si las cadenas tienen igual longitud y mismos caracteres.
bool AreEqual(const char *str1, const char *str2)
{
    const char *pstr1, *pstr2;

    for (pstr1 = str1, pstr2 = str2; *pstr1 != '\0' && *pstr2 != '\0'; pstr1++, pstr2++)
    {
        if (*pstr1 != *pstr2)
        {
            return false;
        }
    };
    // para ver si llegaron al mismo tiempo al final
    if (*pstr1 == '\0' && *pstr2 == '\0')
    {
        return true;
    }
    return false;
}

// funcion areDecimalDigits
//  Precondición: 'str' es un puntero válido a una cadena terminada en '\0'.
//  Poscondición: Retorna true si todos los caracteres son dígitos. Si la cadena está vacía, debés decidir si retorna false (recomendado) o true.
bool AreDecimalDigits(const char *str)
{
    if (*str == '\0')
    {
        return false;
    }
    for (const char *p = str; *p != '\0'; p++)
    {
        if (*p < '0' || *p > '9')
        {
            return false;
        }
    }
    return true;
}

// funcion Contains
// precondiciones:str es un puntero a un bloque de memoria válido que contiene una cadena terminada en \0.
// postcondiciones:Retorna true si el carácter charComp pertenece a la cadena apuntada por str; en caso contrario, retorna false.
bool Contains(const char charComp, const char *str)
{
    for (const char *p = str; *p != '\0'; p++)
    {
        if (*p == charComp)
        {
            return true;
        }
    }
    return false;
}

// funcion ToInteger
// precondicion: str apunta a una cadena válida terminada en '\0' que representa un número entero en base 10 (asume que la cadena es correcta según consigna).
// postcondicion: Devuelve el valor numérico entero equivalente a la cadena
int ToInteger(const char *str)
{
    int resultado = 0;
    int signo = 1;

    if (*str == '-')
    {
        signo = -1;
        str++;
    }

    for (const char *p = str; *p != '\0'; p++)
    {
        resultado = resultado * 10 + (*p - '0');
    }
    return resultado * signo;
}

/*
Ejemplo para 123:
 - iteracion 1 (lee '1'): 0*10+1=1
 - iteracion 2 (lee '2'): 1*10+2=12
 - iteracion 3 (lee '3'): 12*10+3=123

Esto funciona pq en ASCII el caracter '0' = 48 y (por ejemplo) el '3' = 51
--> ()'3'-'0') == (51-48 = 3)
Es por eso que hacemos resultado = resultado * 10 + (*p - '0')
*/

// Funcion ContarUnaLetra
// precondicion: str apunta a una cadena válida terminada en '\0' que representa un número entero en base 10 (asume que la cadena es correcta según consigna).
// poscondicion: retorna la cantidad de veces que se repite una letra en especifico dentro de la cadena
int ContarUnaLetra(const char *str, char buscar)
{
    int i = 0;
    for (const char *p = str; *p != '\0'; p++)
    {
        if (*p == buscar)
        {
            i++;
        }
    }
    return i;
}
