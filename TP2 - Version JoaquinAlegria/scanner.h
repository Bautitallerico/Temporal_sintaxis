#ifndef SCANNER_H
#define SCANNER_H

#include <stdio.h>

// Enumerado que mapea los tokens a los estados aceptores y de error de la Tabla de Transición.
typedef enum {
    // Aceptores (>= 100)
    TOKEN_ID          = 100,  // Identificador: letra seguida de letras/dígitos
    TOKEN_CTE         = 101,  // Constante: entero o real (double)
    TOKEN_SUMA        = 102,  // '+'
    TOKEN_MAS_IGUAL   = 103,  // '+='
    TOKEN_RESTA       = 104,  // '-'
    TOKEN_MENOS_IGUAL = 105,  // '-='
    TOKEN_MULT        = 106,  // '*'
    TOKEN_MULT_IGUAL  = 107,  // '*='
    TOKEN_DIV         = 108,  // '/'
    TOKEN_DIV_IGUAL   = 109,  // '/='
    TOKEN_POTENCIA    = 110,  // '^'
    TOKEN_IGUAL       = 111,  // '='
    TOKEN_FDT         = 112,  // Fin de texto (EOF)
    TOKEN_NL          = 113,  // Nueva línea (para el prompt del intérprete)

    // Errores (>= 200)
    TOKEN_ERROR_LEXICO = 200  // Error lexico, agrupa fallos
} Token;

// Declaración de la función principal del escáner.
// Recibe un flujo de archivo (que puede ser stdin) y retorna el Token reconocido.
int escanear(FILE *archivo);

// Declaración del getter para acceder al lexema almacenado en el buffer estático.
const char* obtener_lexema(void);

#endif 
