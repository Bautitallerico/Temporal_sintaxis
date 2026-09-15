# Trabajo Práctico 2: Escáner de Calculadora

**UTN - Sintaxis y Semántica de Lenguajes - K2003**

**Grupo 11**

### Descripción
Resolución del Trabajo Práctico 2, enfocado en realizar el interprete de una calculadora, especificamente el Escaner.

El sistema procesa los caracteres de entrada mediante una tabla de transición, la cual cumple con las siguentes reglas:

* **Reconocimiento de Tokens:** Clasifica constantes numéricas (con o sin decimales), identificadores de variables y operadores matemáticos simples (`+`, `-`, `*`, `/`, `^`) y de asignación compuesta (`+=`, `-=`, `*=`, `/=`).
* **Gestión de Lexemas:** Acumula temporalmente los caracteres válidos en un buffer estático de 256 posiciones para conformar las cadenas de texto antes de reportarlas al programa principal.
* **Manejo de Estados Optimizado:** La tabla de transición separa los estados aceptores (rango 100+) y los de error (rango 200+), facilitando el corte del ciclo iterativo y el manejo seguro del "centinela" devolviendo caracteres al flujo de entrada.
* **Control de Errores:** Detecta y reporta fallos léxicos de forma limpia, rechazando símbolos ajenos al alfabeto del lenguaje y evitando la validación de puntos decimales aislados.
* **Condición de Cierre:** El motor iterativo del escáner finaliza su ejecución de forma segura al detectar el token de Fin de Texto (FDT / EOF) o al recibir una interrupción directa por consola.

### Estructura del Directorio
* **`readme.md`**: Carátula del Trabajo Práctico.
* **`tabla.md`**: Documentación de la tabla de transición.
* **`main.c`**: Fuente principal para ejecutar y probar el escáner.
* **`scanner.c`**: Implementación de la lógica del escáner y tabla de estados.
* **`scanner.h`**: Archivo de cabecera con enumerados y declaraciones.

### Ejemplo de Uso
<img width="550" height="400" alt="ejemplo scanner" src="https://github.com/user-attachments/assets/8c96d4cc-1b54-46bc-a576-df6c8e323b21" />
