.PHONY: all clean

BANDERAS = -std=c++11 -Wall -g
SALIDA = DOS

all: ejemplo

ejemplo:
	g++ $(BANDERAS) card.cpp deck.cpp main.cpp -o $(SALIDA)

clean:
	rm -r *.dSYM $(SALIDA)