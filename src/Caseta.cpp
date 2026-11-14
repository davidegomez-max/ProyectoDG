#include "Caseta.h"
#include <iostream>
#include "Excepciones.h"

Caseta::Caseta(Operador* operador) {
    this->operador = operador;
    totalV= 0;
    totalRecibido= 0;
    cantidadC= 0;
    cantidadM= 0;
    cantidadB = 0;
    cantidadCamiones= 0;
}
Caseta::~Caseta(){
    for (int i=0; i<registros.size();i++){
        delete registros[i];
    }
    cout << "Destruyendo caseta" << endl;}
void Caseta::registrarPaso(Vehiculo* vehiculo){
    string tipoV = vehiculo->getTipo();
    int valorCobrado = vehiculo->cobrar();
    RegistroPaso* registro = new RegistroPaso(vehiculo->getPlaca(), tipoV, valorCobrado);
    registros.push_back(registro);
    totalV = totalV + 1;
    totalRecibido = totalRecibido + valorCobrado; 
    if (tipoV == "Carro"){
        cantidadC= cantidadC + 1;
    }else if (tipoV == "Moto"){
        cantidadM= cantidadM + 1;
    } else if (tipoV == "Bus"){// visual >:v
        cantidadB=cantidadB + 1;
    } else if (tipoV == "Camion"){
        cantidadCamiones=cantidadCamiones + 1;
    }
}
int Caseta::getTotalV() const{
    return totalV;
}
int Caseta::getTotalRecibido() const{
    return totalRecibido;
}
int Caseta::getCantidadC() const{
    return cantidadC;
}
int Caseta::getCantidadM() const{
    return cantidadM;
}
int Caseta::getCantidadB() const{
    return cantidadB;
}
int Caseta::getCantidadCamiones() const{
    return cantidadCamiones;
}
void Caseta::cerrarCaja (int efectivoCaja){
    if (efectivoCaja != totalRecibido){
        int diferencia = efectivoCaja - totalRecibido;
        if (diferencia > 0){
            throw DescuadredeCaja("Sobran " + to_string(diferencia) + " en la caja");
        } else {
            throw DescuadredeCaja("Faltan " + to_string(-diferencia) + " en la caja");
        }
    }
}