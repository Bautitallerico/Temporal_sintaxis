CC = gcc
CFLAGS = -g -Wall -c -pedantic-errors -std=c23 
TARGET = calc

all: $(TARGET)

$(TARGET): main.c scanner.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c scanner.c

clean:
	rm -f $(TARGET)

