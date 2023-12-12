# Liste des fichiers source
SRCS = bonjour.c bonnenuit.c bonsoir.c 

# Generer les noms des fichiers objets
OBJS = $(SRCS:.c=.o)

# Nom de l'archive
LIBNAME = libsalutations.a

all: $(LIBNAME) 

$(LIBNAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(LIBNAME)