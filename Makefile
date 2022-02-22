# Lab Build and Test automation

CC     = gcc
CFLAGS = -I.
DEPS   =
OBJ    = word-reverser.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

word-reverser: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f word-reverser word-reverser.o

test: word-reverser
	@echo manually tested program
	./word-reverser
