#include <iostream>
#include <sstream>
#include <typeinfo>
#include <vector>

#include "Zoologico.h"
#include "Animales.h"
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"
using namespace std;
//sub menu
int menuTipoAnimal();
//menu
int menu();

//vision
int vision();

//peludo
int peludo();

//crear animales
Animales* CrearAnimal();

//eliminar
void eliminarAnimal();

//patas
Patas* crearPatas();

//pelaje
Pelaje* crearPelaje();

//ojo
Ojos* crearOJos();

//oreja
Orejas* crearOrejas();

//cola
Cola* crearCola();

/*
//listar
void ListarAnimales(vector*<Animales>);

//trasladar
void TrasladarAnimales(vector*<Animales>);*/

int main(){
    int opcion = 1;
    vector<Animales*> animales;
    Zoologico* zoologico;
    string nombre;
    int tamanio, capacidad;
    cout<< "Ingrese el nombre del Zoologico:"<< endl;
    cin>> nombre;
    cout<< "Ingrese el tamaño: "<< endl;
    cin>> tamanio;
    cout<<"Ingrese la capacidad de personas:"<< endl;
    cin>>capacidad;

    zoologico = new Zoologico(nombre, tamanio, capacidad);


    while(opcion>=1 && opcion <=4){
        opcion = menu();
        switch(opcion){
            case 1:
                cout<<"Agregar"<< endl;
                animales.push_back(CrearAnimal());
                //cout<< animales[0]->getNombre() << endl;
                cout<< "Animal Agregado Exitosamente!! "<< endl;
            break;

            case 2:{
                cout<<"Eliminar"<< endl;
                int posicion = -1;
                if(animales.size()>0){
                    cout<< "Lista de animales"<< endl;
                    for(int i = 0; i<animales.size(); i++){
                        if(animales[i] != NULL){
                           cout<< (i+1)<< "- "<<animales[i]->getNombre() << endl; 
                        }
                    }

                    while(posicion<1 || posicion>animales.size()){
                        cout<< "Ingrese la posicion del elemento a eliminar: ";
                        cin>>posicion;
                    }

                    int posicionNueva = (posicion-1);
                    delete animales[posicionNueva];
                     animales[posicionNueva] = NULL;
                } else{
                    cout<< "NO hay animales en lista de espera" << endl;
                }};
            break;
        
            case 3:{
                cout<<"transferir"<< endl;
                if(animales.size()>0){
                    for(int i= 0; i<animales.size(); i++){
                        if(animales[i]->getTipo() == 1){
                            zoologico->aniadirElemento(animales[i], 1);

                        }else if(animales[i]->getTipo() == 2){
                            zoologico->aniadirElemento(animales[i], 2);

                        }else if(animales[i]->getTipo() == 3){
                            zoologico->aniadirElemento(animales[i], 3);

                        }else if(animales[i]->getTipo() == 4){
                            zoologico->aniadirElemento(animales[i], 3);
                        }
                        //cout<< animales[i]->getTipo() << endl;

                    }// fin del for

                    //liberar memoria
	                for(int i =0; i<animales.size(); i++){
		                delete animales[i];
		                animales[i] = NULL;
                	}

	                //borra las casillas del vector
	                animales.clear();
                }// fin del if 
                else{
                    cout<< "NO hay animales en lista de espera" << endl;
                }

                };
            break;

            case 4:
                cout<<"listar"<< endl;
            break;

        }
    }
    cout<< "Salio del programa"<< endl;

    /*opcion = menuTipoAnimal();

    

    int peludoCondicion = 0;
    peludoCondicion = peludo();
    int visionCondicion = 0;
    visionCondicion = vision();
    cout<< "es " << opcion<< " PEL: "<< peludoCondicion << " vision "<< visionCondicion<< endl;*/

    return 0;
}

//menu
int menu(){
    int Respuesta = -1;
    while (Respuesta <= 0 || Respuesta >5){
        cout << endl
             << "Bienvenido !! " << endl
             << "Ingresa tu opcion : " << endl;
        cout << "1.- Agregar Animal" << endl
             << "2.- Eliminar Animal" << endl
             << "3.-Transferir al zoologico" << endl
             << "4.-Listar Animales" << endl
             << "5.-Salir" << endl;
        cin >> Respuesta;
    }
    return Respuesta;
} //Fin del metodo del Menu.

//menu tipo de animal
int menuTipoAnimal(){
    int opcion = -1;
    while(opcion<1 || opcion>4){
        cout<<"Ingrese que tipo de animal es: "<< endl;
        cout<<"1.-Árticos "<< endl << "2.-Desérticos"<< endl<< "3.-Tropicales"<< endl <<"4.-Sabana"<< endl;
        cin>>opcion;
    }


    return opcion;
}

//vision
int vision(){
    int visionCondicion = -1;

    while(visionCondicion<1 || visionCondicion>2){
        cout<< "Tiene vision nocturna (1.-si  / 2.-No)" << endl;
        cin>> visionCondicion;
    }


    return visionCondicion;
}


int peludo(){
    int peludoCondicion = -1;

    while(peludoCondicion<1 || peludoCondicion>2){
        cout<< "Es peludo (1.- Si / 2.-No) :  " << endl;
        cin>> peludoCondicion;
    }


    return peludoCondicion;

}

Animales* CrearAnimal(){
    string nombre, especie;
    int tamanio, tipo;
    cout<< "Ingrese el nombre: "<< endl;
    cin>> nombre;

    cout<< "Ingrese la especie: "<< endl;
    cin>> especie;

    cout<< "Ingrese el tamaño: "<< endl;
    cin>> tamanio;

    tipo = menuTipoAnimal();

    Patas* patas;
    patas = crearPatas();


    Pelaje* pelaje;
    pelaje = crearPelaje();

    Ojos* ojos;
    ojos = crearOJos();

    Orejas* orejas;
    orejas = crearOrejas();

    Cola* cola;
    cola = crearCola();

    Animales* animal;
    animal = new Animales(especie, nombre, tamanio,tipo, patas, pelaje, ojos, orejas, cola);
    
    return animal;
}

Patas* crearPatas(){
    int cantida , largo;
    string tipo;
    cout<<"PATAS"<< endl;
    cout<< "Ingrese la cantidad de patas:"<< endl;
    cin>> cantida;

    cout<<"Ingrese el largo: "<< endl;
    cin>> largo;
    
    cout<< "Ingrese el tipo:"<< endl;
    cin>> tipo;

    Patas* patas;
    patas = new Patas(cantida, largo, tipo);
    return patas;
}


Pelaje* crearPelaje(){
    string color;
    int grosor, largo;
    cout<< "PELAJE"<< endl;
    cout<< "Ingrese el color"<< endl;
    cin>> color;

    cout<< "Ingrese el grosor"<< endl;
    cin>> grosor;

    cout<< "Ingrese el largo"<< endl;
    cin>> largo;

    Pelaje* pelaje;
    pelaje  = new Pelaje(color, grosor, largo);
    return pelaje;
}

Ojos* crearOJos(){
    string color;
    cout<< "OJOS"<< endl;
    cout<< "Ingrese el color: ";
    cin>> color;

    int visionCondicion;
    bool laVision;
    visionCondicion = vision();
    if(visionCondicion == 2){
        laVision = true;
    }

    Ojos* ojos;
    ojos = new Ojos(color, laVision);
    return ojos;

}

Orejas* crearOrejas(){
    int tamanio, capacida;
    cout<< "OREJAS"<< endl;
    cout<< "Ingrese el tamaño"<< endl;
    cin>> tamanio;

    cout<< "Ingrese la capacida"<< endl;
    cin>> capacida;

    Orejas* orejas;
    orejas = new Orejas(tamanio, capacida);

    return orejas;
}

Cola* crearCola(){
    int largo, peludoCondicion;
    cout<<"COLA"<< endl;
    cout<< "Ingrese el largo"<< endl;
    cin>> largo;

    bool peludoC;
    peludoCondicion  = peludo();
    if(peludoCondicion == 2){
        peludoC = true;
    }

    Cola* cola;
    cola = new Cola(largo, peludoC);
    return cola;
}

void eliminarAnimal(){
    /*int posicion = -1;
    if(animales.size()>0){
        cout<< "Lista de animales";
        for(int i = 0; i<animales.size(); i++){
            cout<< (i+1)<< "- "<<animales[i]->getNombre() << endl;
        }

        while(posicion<1 || posicion>animales.size()){
            cout<< "Ingrese la posicion del elemento a eliminar: ";
            cin>>posicion;
        }

        delete animales[posicion];
        animales[posicion] = NULL;
    }*/
    


}
/*
void listarAnimales(vector *<Animales>){

}
void trasladarAnimales(vector*<Animales>){

}
*/






