IDIR =../include
CC=g++
CFLAGS=-I$(IDIR) -ftest-coverage -fprofile-arcs -std=c++11

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = pilha.hpp catch.hpp testa_pilha.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = pilha.o testa_pilha.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pilha: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~