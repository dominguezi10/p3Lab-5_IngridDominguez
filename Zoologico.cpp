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
    string temporal;
    string temporal2;
    char uno;
    char dos;
    Animales* an ;
    Animales* an2;
    cout<< "-> Elementos de Zona Artica:"<< endl;
    

    for(int i= 0; i<zonaArtica.size(); i++){
        temporal = zonaArtica[i]->getNombre();
        an = zonaArtica[i];
        for(int j = 1; j<zonaArtica.size(); j++){
            temporal2 = zonaArtica[j]->getNombre();
            an2 = zonaArtica[j];
            uno = temporal.at(0);
            dos = temporal2.at(0);

            if(uno> dos){
                zonaArtica[j] = an;
                zonaArtica[j-1] = an2;
            }
            cout<<"this ZA ";
        }
        
    }

    for(int i= 0; i<zonaArtica.size(); i++){
        cout<< (i+1) << "- "<<zonaArtica[i]->getNombre()<< endl;
    }


    for(int i= 0; i<zonaDesertica.size(); i++){
        temporal = zonaDesertica[i]->getNombre();
        an = zonaArtica[i];
        for(int j = 1; j<zonaDesertica.size(); j++){
            temporal2 = zonaDesertica[j]->getNombre();
            an2 = zonaDesertica[j];
            uno = temporal.at(0);
            dos = temporal2.at(0);

            if(uno> dos){
                zonaDesertica[j] = an;
                zonaDesertica[j-1] = an2;
            }
            cout<<"this ZD ";
        }
        
    }

    cout<< "-> Elementos de Zona Desertica:"<< endl;
    for(int i= 0; i<zonaDesertica.size(); i++){
        cout<< (i+1) << "- "<<zonaDesertica[i]->getNombre()<< endl;
    }



    for(int i= 0; i<junglaTropical.size(); i++){
        temporal = junglaTropical[i]->getNombre();
        an = junglaTropical[i];
        for(int j = 1; j<junglaTropical.size(); j++){
            temporal2 = junglaTropical[j]->getNombre();
            an2 = junglaTropical[j];
            uno = temporal.at(0);
            dos = temporal2.at(0);

            if(uno> dos){
                junglaTropical[j] = an;
                junglaTropical[j-1] = an2;
            }
            cout<<"this JT ";
        }
        
    }

    cout<< "-> Elementos de Jungla Tropical:"<< endl;
    for(int i= 0; i<junglaTropical.size(); i++){
        cout<< (i+1) << "- "<<junglaTropical[i]->getNombre()<< endl;
    }


    for(int i= 0; i<sabana.size(); i++){
        temporal = sabana[i]->getNombre();
        an = sabana[i];
        for(int j = 1; j<sabana.size(); j++){
            temporal2 = sabana[j]->getNombre();
            an2 = sabana[j];
            uno = temporal.at(0);
            dos = temporal2.at(0);

            if(uno> dos){
                sabana[j] = an;
                sabana[j-1] = an2;
            }
            cout<<"this JT ";
        }
        
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
