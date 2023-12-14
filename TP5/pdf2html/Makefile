CC=gcc
CFLAGS=-O3 -Wall -funroll-loops
LDLIBS=-lpng


all: pbm2png pbm2eps9 

pbm2png: pbm2png.c
	$(CC) $(CFLAGS) -s -o $@ $^ $(LDLIBS)

pbm2eps9: pbm2eps9.o printer.o
	$(CC) -s -o $@ $^ 

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

install: pbm2png pbm2eps9
	
	mkdir -p ../TP_solo
	mkdir -p ../TP_solo/bin/
	cp pbm2png pbm2eps9 ../TP_solo/bin/

clean:
	rm -f *.o pbm2png pbm2eps9 ./bin/*