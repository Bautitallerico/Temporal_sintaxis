#ifndef STRING_H
#define STRING_H

#include <stdbool.h>

// verifica si una cadena está vacia
bool IsEmpty(const char *str);

// Calcula la longitud de la cadena de forma recursiva
int GetLength(const char *str);

// Informa si la cadena es igual
bool AreEqual(const char *str1, const char *str2);

// indica si algun elemento no es decimal
bool AreDecimalDigits(const char *str);

// indica si una cadena dada tiene un caracter dado.
bool Contains(char charComp, const char *str);

// recibe una cadena de numeros y lo transforma en un entero
int ToInteger(const char *str);

// recibe una cadena e indica cuantos veces se repite un caracter dado
int ContarUnaLetra (const char *str, char buscar);

#endif
