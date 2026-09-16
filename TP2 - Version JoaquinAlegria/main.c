#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

// Nombres legibles para cada token aceptor.
// Se usa acá adentro y en reportar_token(), por eso está fuera del main.
const char *nombres_token[] = {
    "Identificador",       // 100 - 100 = 0
    "Constante",            // 101 - 100 = 1
    "Suma",                 // 102
    "Asignacion +=",        // 103
    "Resta",                // 104
    "Asignacion -=",        // 105
    "Multiplicacion",       // 106
    "Asignacion *=",        // 107
    "Division",             // 108
    "Asignacion /=",        // 109
    "Potencia",             // 110
    "Asignacion =",         // 111
    "Fin de Texto (FDT)",   // 112
    "Nueva Linea"           // 113
};

// Se evalúa el token retornado y se imprime según las reglas de la consigna.
static void reportar_token(Token token_actual) {

    if (token_actual == TOKEN_ERROR_LEXICO) {
        printf("Error lexico\t\t| Lexema: %s\n", obtener_lexema());
        return;
    }

    if (token_actual >= TOKEN_ID && token_actual <= TOKEN_NL) {
        printf("Token: %s", nombres_token[token_actual - 100]);
        if (token_actual == TOKEN_ID || token_actual == TOKEN_CTE) {
            printf("\t| Lexema: %s", obtener_lexema());
        }
        printf("\n");
        return;
    }

    printf("Estado desconocido (%d)\n", token_actual);
}

int main() {

    Token token_actual;

    printf("Iniciando escaner. Ingrese expresiones (Ctrl+Z en Windows para FDT/EOF):\n");

    // El ciclo termina al reconocer el token FDT
    do {
        // Se llama al escáner pasando el flujo estándar de entrada
        token_actual = (Token)escanear(stdin);

        // Se evalúa el token retornado y se imprime según las reglas de la consigna
        reportar_token(token_actual);

    } while (token_actual != TOKEN_FDT);

    return EXIT_SUCCESS;
}
