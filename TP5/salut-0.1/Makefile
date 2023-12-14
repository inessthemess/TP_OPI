.PHONY: all install clean

BINDIR = .


all: 
	$(MAKE) -C ./lib all
	$(MAKE) -C ./src all

	

install: 
	cp ./src/salut $(BINDIR)

clean:
	rm -f $(BINDIR)/salut
	$(MAKE) -C ./src clean
	$(MAKE) -C ./lib clean

