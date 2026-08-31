CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g -I./includes
LDFLAGS = -lm

SRC = src/main.c src/rng.c
OBJ = $(SRC:.c=.o)
TARGET = project2

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
