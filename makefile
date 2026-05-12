CC = gcc
CFLAGS = -g -Wall -c -pedantic-errors -std=c23 

EJECUTABLES = StringTest enlineas longitudes mayorlongitud todosiguales suma

#indica que objetivos deben realizarse si o si, sin importar las dependencias
.PHONY: all clean test

all: $(EJECUTABLES)

prog: casoprueba_temporal.o String.o
	$(CC) casoprueba_temporal.o String.o -o prog

#$<: es el primer item en la lista de dependencias
#$@: nombre del objetivo    
String.o: String.c String.h
	$(CC) $(CFLAGS) $< -o $@

StringTest: StringTest.o String.o
	$(CC) $^ -o $@

enlineas: enlineas.o String.o
	$(CC) $^ -o $@

longitudes: longitudes.o String.o
	$(CC) $^ -o $@

mayorlongitud: mayorlongitud.o String.o
	$(CC) $^ -o $@

todosiguales: todosiguales.o String.o
	$(CC) $^ -o $@

suma: suma.o String.o
	$(CC) $^ -o $@


#Esto es porque tiene dependencia directa de string.h
String.o: String.c String.h
	$(CC) $(CFLAGS) $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o $(EJECUTABLES) prog

test: prog
	./prog