SRCS = bonjour.c bonnenuit.c bonsoir.c 
CC=gcc
CFLAGS= -W -Wall -pedantic
#Question 2 : generer les fichiers objets
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