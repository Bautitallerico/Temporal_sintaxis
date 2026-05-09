#include <stdlib.h>
#include <ctype.h>

#ifndef STRING_H
#define STRING_H

int IsEmpty(const char *str);

#endif

//Propuesta

// Calcula la longitud de la cadena de forma recursiva
int GetLength(const char *str);

//Informa si la cadena es igual
int AreEqual(const char *str1, const char *str2);

//indica si algun elemento no es decimal
bool AreDecimalDigits(const char *str);

//indica si una cadena dada tiene un caracter dado.
bool Contains(char charComp, const char *str):

//recibe una cadena de numeros y lo transforma en un entero
int ToInteger (const char *str)
