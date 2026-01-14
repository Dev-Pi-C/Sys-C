CC = gcc
SRC = src/main.c
CFLAGS = -c -O2 -std=c23
OBJ = build/main.o
BUILD = build/main

all: %.o
	$(CC) $(OBJ) -o $(BUILD)

%.o:
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)
