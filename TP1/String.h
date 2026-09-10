#ifndef STRING_H
#define STRING_H

#include <stdbool.h>

// verifica si una cadena está vacia
//Precondicion: Un puntero a una cadena de caracteres
//Postcondicion: Devuelve "1" si la cadena es vacia; devuelve "0" si la cadena no es vacia
bool IsEmpty(const char *str);

// Calcula la longitud de la cadena de forma recursiva
//Precondición: 'str' debe ser un puntero válido a una cadena de caracteres terminada en el carácter nulo ('\0').
//Poscondición: Retorna un número entero (int) que representa la cantidad de caracteres de la cadena, sin contar el terminador nulo.
int GetLength(const char *str);

// Informa si la cadena es igual
// precondicion: str1 y str2 son punteros a cadenas válidas terminadas en '\0'.
// postcondición:Retorna true solo si las cadenas tienen igual longitud y mismos caracteres.
bool AreEqual(const char *str1, const char *str2);

// indica si algun elemento no es decimal
//  Precondición: 'str' es un puntero válido a una cadena terminada en '\0'.
//  Poscondición: Retorna true si todos los caracteres son dígitos. Si la cadena está vacía, debés decidir si retorna false (recomendado) o true.
bool AreDecimalDigits(const char *str);

// indica si una cadena dada tiene un caracter dado.
// precondiciones:str es un puntero a un bloque de memoria válido que contiene una cadena terminada en \0.
// postcondiciones:Retorna true si el carácter charComp pertenece a la cadena apuntada por str; en caso contrario, retorna false.
bool Contains(const char charComp, const char *str);

// recibe una cadena de numeros y lo transforma en un entero
// precondicion: str apunta a una cadena válida terminada en '\0' que representa un número entero en base 10 (asume que la cadena es correcta según consigna).
// postcondicion: Devuelve el valor numérico entero equivalente a la cadena
int ToInteger(const char *str);

// recibe una cadena e indica cuantos veces se repite un caracter dado
// precondicion: str apunta a una cadena válida terminada en '\0' que representa un número entero en base 10 (asume que la cadena es correcta según consigna).
// poscondicion: retorna la cantidad de veces que se repite una letra en especifico dentro de la cadena
int ContarUnaLetra (const char *str, char buscar);

//Propuesta funcion extra

// Indica si una cadena es un palíndromo (se lee igual al derecho y al revés)
// Precondición: str es un puntero a una cadena válida terminada en '\0'.
// Poscondición: Retorna true si la cadena es palíndromo (incluyendo cadenas vacías) sino retorna false.
bool EsPalindrome(const char *str);

#endif
