CC = gcc
CFLAGS = -g -Wall -c -pedantic-errors -std=c23 

#indica que objetivos deben realizarse si o si, sin importar las dependencias
.PHONY: clean test

prog: casoprueba_temporal.o String.o
	$(CC) casoprueba_temporal.o String.o -o prog

casoprueba_temporal.o: casoprueba_temporal.c String.h
	$(CC) $(CFLAGS) casoprueba_temporal.c -o casoprueba_temporal.o

#$<: es el primer item en la lista de dependencias, en nuestro caso el String.c
#$@: nombre del objetivo    
String.o: String.c String.h
	$(CC) $(CFLAGS) $< -o $@

#info adicional 
#$^: Esta variable representa todas las dependencias de la regla de compilación.

clean:
	rm casoprueba_temporal.o String.o prog

test: prog
	./prog