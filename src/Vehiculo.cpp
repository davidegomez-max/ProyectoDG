#include "Vehiculo.h"

Vehiculo::Vehiculo(string placa) {
    this->placa = placa;}
Vehiculo::~Vehiculo() {}
string Vehiculo::getTipo() {
return "Vehiculo";}
string Vehiculo::info()const{
    return "Placa: " + placa;
}