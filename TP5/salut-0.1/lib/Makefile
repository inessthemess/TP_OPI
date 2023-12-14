SRCS = bonjour.c bonnenuit.c bonsoir.c 
CC=gcc
CFLAGS= -W -Wall -pedantic
#Question 2 : pour generer les fichiers objets il faut faire gcc -c fichier_source.c -o fichier_objet.o
OBJS = $(SRCS:.c=.o)

#Nom de l'archive
LIBNAME = libsalutations.a

all: $(LIBNAME) 

$(LIBNAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(LIBNAME)