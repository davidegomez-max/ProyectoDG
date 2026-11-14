#include "RegistroPaso.h"
#include <iostream>

RegistroPaso::RegistroPaso(string placa, string tipoV, int valorCobrado) {
    this->placa = placa;
    this->tipoV = tipoV;
    this->valorCobrado = valorCobrado;}
RegistroPaso::~RegistroPaso() {
    cout << "Destruyendo RegistroPaso " << placa << endl;
}
string RegistroPaso::getPlaca() const {
    return placa;
}
string RegistroPaso::getTipoV() const {
    return tipoV;}
int RegistroPaso::getValorCobrado() const {
    return valorCobrado;}