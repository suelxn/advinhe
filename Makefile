CC = gcc

CFLAGS = -Wall -Wextra -I./src -I./lib/civetweb/include -DOPENSSL_API_1_1

TARGET = jogo

SOURCES = \
	src/main.c \
	src/game.c \
	lib/civetweb/src/civetweb.c

all:
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET) -lpthread -ldl -lssl -lcrypto

clean:
	rm -f $(TARGET)