#include "Camiones.h"
#include <iostream>
using namespace std;

Camiones::Camiones(string placa, int ejes) : Vehiculo(placa) {
	this->placa = placa;
    this->ejes = ejes;
}
string Camiones::info() const {
}

int  Camiones::cobrar() const {
    return ejes * 8100;
}

