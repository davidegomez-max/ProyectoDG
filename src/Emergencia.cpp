#include "Emergencia.h"
Emergencia::Emergencia(string unidad, string descripcion){
    this->unidad = unidad;
    this->descripcion = descripcion; 
}
void setUnidad (string unidad){
    this->unidad = unidad;
} 
void setDescripcion(string descripcion){
    this->descripcion = descripcion;
}
void setEnEmergencia(bool enEmergencia){
    this->enEmergencia = enEmergencia;
}
string getUnidad(){
    return unidad;
}
string getDescripcion(){
    return descripcion;
}
bool getEmergencia(){
return enEmergencia;
}