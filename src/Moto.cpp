#include "Moto.h"

Moto::Moto(string placa, int cilindraje): Vehiculo(placa), cilindraje(cilindraje){

}
int Moto:: getCilindraje(){
    return cilindraje;
}
string Moto:: info() const{
    return info() + ", cilindraje:" to_string(cilindraje);
}
string Moto:: getTipo() const{
    return "Moto";
}