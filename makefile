lab5: main.o Zoologico.o Animales.o Patas.o Pelaje.o Ojos.o Orejas.o Cola.o
	g++ main.o Zoologico.o Animales.o Patas.o Pelaje.o Ojos.o Orejas.o Cola.o -o lab5

main.o: main.cpp Zoologico.o Animales.h Patas.h Pelaje.h Ojos.h Orejas.h Cola.h
	g++ -c main.cpp

Animales.o: Animales.h Animales.cpp Patas.h Pelaje.h Ojos.h Orejas.h Cola.h
	g++ -c Animales.cpp

Patas.o: Patas.h Patas.cpp
	g++ -c Patas.cpp

Pelaje.o: Pelaje.h Pelaje.cpp
	g++ -c Pelaje.cpp

Ojos.o: Ojos.h Ojos.cpp
	g++ -c Ojos.cpp

Orejas.o: Orejas.h Orejas.cpp
	g++ -c Orejas.cpp

Zoologico.o: Zoologico.h Zoologico.cpp Animales.h
	g++ -c Zoologico.cpp
