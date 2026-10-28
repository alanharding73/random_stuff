CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = add_numbers_c

all: $(TARGET)

$(TARGET): add_numbers.c
	$(CC) $(CFLAGS) -o $(TARGET) add_numbers.c

clean:
	rm -f $(TARGET)

.PHONY: all clean
