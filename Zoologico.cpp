//Metodo sets ade gets

#include "Zoologico.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Zoologico::Zoologico(string nombre, int tamanio, int capacidad){
    this->nombre = nombre;
    this->tamanio = tamanio;
    this->capacidad =capacidad;
}//Fin constructor

//Constructor2
Zoologico::Zoologico(){

}//Fin constructor sencillo

void Zoologico:: listarTodo(){
    cout<< "-> Elementos de Zona Artica:"<< endl;
    for(int i= 0; i<zonaArtica.size(); i++){
        cout<< (i+1) << "- "<<zonaArtica[i]->getNombre()<< endl;
    }

    cout<< "-> Elementos de Zona Desertica:"<< endl;
    for(int i= 0; i<zonaDesertica.size(); i++){
        cout<< (i+1) << "- "<<zonaDesertica[i]->getNombre()<< endl;
    }

    cout<< "-> Elementos de Jungla Tropical:"<< endl;
    for(int i= 0; i<junglaTropical.size(); i++){
        cout<< (i+1) << "- "<<junglaTropical[i]->getNombre()<< endl;
    }

    cout<< "-> Elementos de Sabana:"<< endl;
    for(int i= 0; i<sabana.size(); i++){
        cout<< (i+1) << "- "<<sabana[i]->getNombre()<< endl;
    }
}


void Zoologico:: aniadirElemento(Animales* animal, int tipo){
    
    switch(tipo){
        case 1:
            zonaArtica.push_back(animal);
        break;

        case 2:
            zonaDesertica.push_back(animal);
        break;

        case 3:
            junglaTropical.push_back(animal);
        break;

        case 4:
            sabana.push_back(animal);
        break;
    }

}//fin de añadir

vector<Animales *> Zoologico::getZonaArtica(){
    return zonaArtica;
}

void Zoologico:: setZonaArtica(vector<Animales *> zonaArtica){

    this->zonaArtica=zonaArtica;

}

vector<Animales *> Zoologico::getZonaDesertica(){
    return zonaDesertica;
}

void Zoologico:: setZonaDesertica(vector<Animales *> zonaDesertica){

    this->zonaDesertica=zonaDesertica;

}

vector<Animales *> Zoologico::getJunglaTropical(){
    return junglaTropical;
}

void Zoologico:: setJunglaTropical(vector<Animales *> junglaTropical){

    this->junglaTropical=junglaTropical;

}

vector<Animales *> Zoologico::getSabana(){
    return sabana;
}

void Zoologico:: setSabana(vector<Animales *> sabana){

    this->sabana=sabana;

}

Zoologico::~Zoologico(){

    cout<<"La instancia de Zoologico fue eliminada"<<endl;

}
