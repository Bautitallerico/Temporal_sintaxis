CC = gcc
CFLAGS = -g -Wall -c -pedantic-errors -std=c23 

EJECUTABLES = StringTest enlineas longitudes mayorlongitud todosiguales suma

.PHONY: all clean test


all: $(EJECUTABLES)


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

String.o: String.c String.h
	$(CC) $(CFLAGS) $< -o $@


%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o $(EJECUTABLES)

test: StringTest
	./StringTest
