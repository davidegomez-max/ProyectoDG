#pragma once
#include "Variante.h"
#include "Bus.h"
 #include "Excepciones.h"

 Bus::Bus(string placa, int puestos): Vehiculo(placa), puestos (puestos){
    if (puestos < 1) {
        throw DatosInvalidos("El bus tiene que teneral menos un puesto");
    }
 }
Bus::~Bus(){
    cout << "Destruyendo bus "<< placa << endl;
}

int Bus::getPuestos() const{
    return puestos;
} 
string Bus::getTipo() const{
    return "Bus";
}
string Bus::info() const{
    return Vehiculo::info()+ " puestos: " + to_string(puestos);
}
int Bus::cobrar() const{
    int tarifa = 14000 +(300*DECIMA);
    return tarifa;
}