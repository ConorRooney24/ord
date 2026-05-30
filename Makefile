CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: build/libord.a

build/libord.a: build/da.o
	mkdir -p build
	ar rcs build/libord.a build/da.o

build/da.o: src/da.c
	mkdir -p build
	$(CC) $(CFLAGS) -c src/da.c -o build/da.o

clean:
	rm -f build/da.o build/libord.a
	rmdir build

re: clean all

install: all
	cp build/libord.a /usr/local/lib/
	cp -r include/ord /usr/local/include/

uninstall:
	rm -f /usr/local/lib/libord.a
	rm -rf /usr/local/include/ord