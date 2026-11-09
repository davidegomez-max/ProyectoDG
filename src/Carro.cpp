#pragma once 
#include "Carro.h"

Carro::Carro(string placa, int pasajeros) : Vehiculo(placa) {
    this->placa = placa;
    this->pasajeros = pasajeros;
}
Carro::~Carro(){
    cout << "Destruyendo Carro " << placa << endl;
}