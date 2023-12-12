all: salut 

salut.o: salut.c 
	gcc -c $< -o $@ -I/home/kali/Desktop/TP_OPI/TP5/Exercice1/salut-0.1/lib

heure.o: heure.c
	gcc -c $< -o $@ 

salut: salut.o heure.o
	gcc -o $@ $^ -lsalutations -L/home/kali/Desktop/TP_OPI/TP5/Exercice1/salut-0.1/lib

clean:
	rm -f *.o salut