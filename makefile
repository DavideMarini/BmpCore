# Variabili
CC = gcc
CFLAGS = -Wall -g
TARGET = a.exe
OBJS = test.o bmpcore/bmpcore.o

# Regola principale
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compilazione dei singoli file
test.o: test.c bmpcore/bmpcore.h
	$(CC) $(CFLAGS) -c test.c

bmpcore/bmpcore.o: bmpcore/bmpcore.c bmpcore/bmpcore.h
	$(CC) $(CFLAGS) -c bmpcore/bmpcore.c -o bmpcore/bmpcore.o

# Pulizia dei file oggetto ed eseguibile
clean:
	del /Q *.o bmpcore\*.o $(TARGET)