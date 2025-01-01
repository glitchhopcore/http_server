CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/main.c src/server.c src/handler.c
OBJ = $(SRC:.c=.o)
TARGET = http_server

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean

