//Bienvenido
#include <string>
#include <iostream>
#include <vector>
#include "Animales.h"

using namespace std;

#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H


//Inicio clase
class Zoologico{

    //Atributos
    private:
        string nombre;
        int tamanio, capacidad;
        vector<Animales *> zonaArtica;
        vector<Animales *> zonaDesertica;
        vector<Animales *> junglaTropical;
        vector<Animales *> sabana;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Zoologico();
        Zoologico(string, int, int);

        //metodos accersores / mutadores
        vector<Animales *> getZonaArtica();
        void setZonaArtica(vector<Animales *>);
        vector<Animales *> getZonaDesertica();
        void setZonaDesertica(vector<Animales *>);
        vector<Animales *> getJunglaTropical();
        void setJunglaTropical(vector<Animales *>);
        vector<Animales *> getSabana();
        void setSabana(vector<Animales *>);

        void aniadirElemento(Animales*, int);

    //Destructor
    ~Zoologico();


};//Fin de la clase


#endif
