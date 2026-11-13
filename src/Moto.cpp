#include "Moto.h"

Moto::Moto(string placa, int cilindraje): Vehiculo(placa), cilindraje(cilindraje){
    if (cilindraje <= 0){
        throw DatosInvalidos("El cilindraje debe ser mayor que 0");
    }
}
int Moto:: getCilindraje(){
    return cilindraje;
}
string Moto:: info() const{
    return Vehiculo::info() + ", cilindraje:" + to_string(cilindraje);
    if (cilindraje>= 400){
        return "La moto es de alto cc";
    }
}
string Moto:: getTipo() const{
    return "Moto";
}
int Moto::cobrar() const{
    int tarifa = 3000 + (100*UNIDAD);
        if (propietario !=nullptr && propietario->esVecino()){
            int descuento = 30 + CENTENA;
            tarifa = tarifa * (100- descuento)/100;}
        return tarifa;
}
Moto::~Moto(){
    cout << "Destruyendo moto " << placa << endl;
}