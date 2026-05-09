#include <stdio.h> //Se supone que este archivo no imprime nada por pantalla, entonces stdio.h no va
#include <ctype.h> // Una restricción es  "No se deben usar funciones estándar de cadenas o conversión." Me parece que esta no tendría que ir
#include <stdbool.h>
#include "String.h"
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

//funcion areDecimalDigits
// Precondición: 'str' es un puntero válido a una cadena terminada en '\0'.
// Poscondición: Retorna true si todos los caracteres son dígitos. Si la cadena está vacía, debés decidir si retorna false (recomendado) o true.
bool AreDecimalDigits(const char *str){
    if(*str =='\0') {
        return false ; 
    }
for (const char *p = str; *p != '\0'; p++)
{
    if(*p < '0' || *p > '9'){
        return false;
    }
}
return true;  
}

//funcion Contains
//precondiciones:str es un puntero a un bloque de memoria válido que contiene una cadena terminada en \0.
//postcondiciones:Retorna true si el carácter charComp pertenece a la cadena apuntada por str; en caso contrario, retorna false.

bool Contains(char charComp, const char *str){ 
    for(const char *p = str; *p != '\0';p++){
        if (*p == charComp)
        {
            return true;
        }        
    }
    return false;
}

//funcion ToInteger
//precondicion: str apunta a una cadena válida terminada en '\0' que representa un número entero en base 10 (asume que la cadena es correcta según consigna).
//postcondicion: Devuelve el valor numérico entero equivalente a la cadena

int ToInteger (const char *str){
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
 - iteracion 2 (lee '1'): 1*10+2=12
 - iteracion 3 (lee '1'): 12*10+3=123

Esto funciona pq en ASCII el caracter '0' = 48 y (por ejemplo) el '3' = 51
--> ()'3'-'0') == (51-48 = 3)
Es por eso que hacemos resultado = resultado * 10 + (*p - '0')
*/

