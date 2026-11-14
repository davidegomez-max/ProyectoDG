#include "Carro.h"
#include "Excepciones.h"
#include "Propietario.h"
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
int Carro:: cobrar() const {
    int tarifa = 10000 + (200*UNIDAD);
    if (propietario != nullptr && propietario->esVecino()){
        int descuento = 30 + CENTENA;
        tarifa = tarifa * (100- descuento)/100;}
    return tarifa;
}
