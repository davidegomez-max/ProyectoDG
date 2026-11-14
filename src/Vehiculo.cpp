#include "Vehiculo.h"
#include "Excepciones.h"
Vehiculo::Vehiculo(string placa) {
    if (placa.length() != 6) {
        throw PlacaInvalidaException("La placa debe tener 6 caracteres");
    }
    for (int i = 0; i < 3; i++) {
        if (placa[i] < 'A' || placa[i] > 'Z') {
            throw PlacaInvalidaException("Los 3 primeros caracteres deben ser letras");
        }
    }
    for (int i = 3; i < 6; i++) {
        if (placa[i] < '0' || placa[i] > '9') {
            throw PlacaInvalidaException("Los 3 ultimos caracteres deben ser numeros");
        }
    }
    this->placa = placa;
    this->propietario = nullptr;
}
Vehiculo::~Vehiculo() {}
string Vehiculo::getTipo() const {
return "Vehiculo";}
string Vehiculo::info()const{
    return "Placa: " + placa;
}
ostream& operator<<(ostream& os, const Vehiculo& vehiculo) {
    os << vehiculo.info();
    return os;
}
void Vehiculo::setPropietario(Propietario* propietario) {
    this->propietario = propietario;
}
string Vehiculo:: getPlaca() const{
    return placa;
}