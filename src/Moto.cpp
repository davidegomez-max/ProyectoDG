#include "Moto.h"
#include "Propietario.h"
Moto::Moto(string placa, int cilindraje): Vehiculo(placa), cilindraje(cilindraje){
    if (cilindraje <= 0){
        throw DatosInvalidos("El cilindraje debe ser mayor que 0");
    }
}
int Moto:: getCilindraje() const{
    return cilindraje;
}
string Moto:: info() const{
    string infoCompleta= Vehiculo::info() + ", cilindraje:" + to_string(cilindraje);
    if (cilindraje>= 400){
         infoCompleta += "La moto es de alto cc";
    }
    return infoCompleta;
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