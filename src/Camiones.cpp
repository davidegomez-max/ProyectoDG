#include "Camiones.h"
#include <iostream>
#include "Excepciones.h"
#include "Variante.h"
using namespace std;

Camiones::Camiones(string placa, int ejes) : Vehiculo(placa), ejes(ejes) {
	if (ejes<2){
        throw DatosInvalidos("El camión tiene que tener al menos 2 ejes");
    }
}
string Camiones::info() const {
    return Vehiculo::info()+ " ejes: " + to_string(ejes);
}

int  Camiones::cobrar() const {
    return ejes * (8000+(100*DECIMA));
}
Camiones::~Camiones(){
    cout << "Destruyendo Camion "<< placa << endl;
}
int Camiones::getEjes() const{
    return ejes;
}
string Camiones::getTipo() const{
    return "Camion";
}
void Camiones::agregarEje(){
    ejes= ejes+1;
}