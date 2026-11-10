#pragma once 
#include "Carro.h"
#include "Excepciones.h"
Carro::Carro(string placa, int pasajeros): Vehiculo(placa), pasajeros (pasajeros) {
    if (pasajeros < 1) {
        throw DatosInvalidos("El número de pasajeros debe ser al menos 1");
    }
}
Carro::~Carro(){
    cout << "Destruyendo carro " << placa << endl;
}
int Carro::getPasajeros() const {
    return pasajeros;
}
string Carro::getTipo() const {
    return "Carro";
}
string Carro::info() const {
    return Vehiculo::info() + ", pasajeros: " + to_string(pasajeros);
}