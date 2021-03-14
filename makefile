CC=gcc
ODIR=obj

_OBJ = main.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

search: $(OBJ)
	$(CC) -o search $(OBJ) 

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o 
