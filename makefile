CC = gcc
SRC = main.c
CFLAGS = -c -O2 -std=c23
OBJ = build/main.o
BUILD = build/main

all: %.o
	$(CC) $(OBJ) -o $(BUILD)

%.o:
	mkdir build
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)
