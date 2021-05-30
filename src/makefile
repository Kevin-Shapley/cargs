CC=gcc
CFLAGS=-I.

DEPS = cargs.h argument.h

OBJ = cargs.o argument.o

%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

build: $(OBJ)
	$(CC) -o cargs $^ $(CFLAGS)
