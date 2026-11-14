#include "Vehiculo.h"
#include "Moto.h"
#include "Excepciones.h"
#include "Camiones.h"
#include "Propietario.h"
#include "Bus.h"
#include "Carro.h"
#include <iostream>
#include <vector>
#include <string>
#include "Persona.h"
#include "Caseta.h"
#include "RegistroPaso.h"
#include "Operador.h"


using namespace std;
int main() {
    vector <Vehiculo*> vehiculos;
    vector<Persona*> personas;
    //propietarios
    Propietario* propietarioNoVecino = new Propietario("Juanita", "67777", false);
    Propietario* propietarioVecino= new Propietario("David","12576", true);
    personas.push_back(propietarioNoVecino);
    personas.push_back(propietarioVecino);  
    
    //caso1
    cout << endl << "Caso 1:" << endl;
    Carro* carro1 = new Carro("ABC123", 3);
    carro1->setPropietario(propietarioNoVecino);
    vehiculos.push_back(carro1);
    cout << carro1->getTipo()<< "-" << *carro1 << endl;
    cout << "Valor a pagar: " << carro1->cobrar() << endl;


    //caso 2
    cout << endl << "Caso 2:" << endl;
    carro1->setPropietario(propietarioVecino);
    cout << carro1->getTipo()<< "-" << *carro1 << endl;
    cout << "Valor a pagar: " << carro1->cobrar() << endl;

    //caso 3
    cout << endl << "Caso 3:" << endl;
    try {
        Moto* moto1 = new Moto("XYZ45A", 150);
        moto1->setPropietario(propietarioVecino);
        vehiculos.push_back(moto1);
        cout << moto1->getTipo()<< "-" << *moto1 << endl;
        cout << "Valor a pagar: " << moto1->cobrar() << endl;
    }
    catch (PlacaInvalidaException& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (DatosInvalidos& e) {
        cout << "Error: " << e.what() << endl;
    }
}