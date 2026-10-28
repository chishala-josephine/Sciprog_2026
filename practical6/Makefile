CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc

mmc: matrices.o matmult.o
	$(CC) -o $@ $^ $(LDFLAGS)

matmult.o: matmult.c
	$(CC) -c $(CCFLAGS) $<

matrices.o: matrices.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o
