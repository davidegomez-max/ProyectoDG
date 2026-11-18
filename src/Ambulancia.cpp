#include "Ambulancia.h"
using namespace std;


Ambulancia::Ambulancia(string placa, string unidad, string descripcion): Vehiculo(placa), Emergencia (unidad, descripcion);{
    this->enEmergencia = false;
}
Carro::~Carro(){
    cout << "Destruyendo ambulancia: " << placa << endl;
}
int Ambulancia::cobrar() const{
    if (enEmergencia == true){
        return 0;
    }
    return 10000 + (200*UNIDAD);
}
string Ambulancia:: getTipo(){
    return "Ambulancia";
}