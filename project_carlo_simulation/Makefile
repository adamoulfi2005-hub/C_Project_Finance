CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g -I./includes
LDFLAGS = -lm

SRC = src/main.c src/rng.c src/monte_carlo.c
OBJ = $(SRC:.c=.o)
TARGET = project3

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
