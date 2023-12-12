all: salut 

salut.o: salut.c 
	gcc -c $< -o $@ -I../lib

heure.o: heure.c
	gcc -c $< -o $@ 

salut: salut.o heure.o
	gcc -o $@ $^ -lsalutations -L../lib

clean:
	rm -f *.o salut