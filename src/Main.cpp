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
    //Caso 4
    cout << endl << "Caso 4:" << endl;
    Moto* moto2 = new Moto("MOT650", 650);
    vehiculos.push_back(moto2);
    cout << moto2->getTipo()<< "-" << *moto2 << endl;
    cout << "Valor a pagar: " << moto2->cobrar() << endl;


    //Caso 5
    cout << endl << "Caso 5:" << endl;
    Bus* bus1 = new Bus("BUS777", 38);
    bus1->setPropietario(propietarioVecino);
    vehiculos.push_back(bus1);
    cout << bus1->getTipo()<< "-" << *bus1 << endl;
    cout << "Valor a pagar: " << bus1->cobrar() << endl;

    //Caso 6
    cout << endl << "Caso 6:" << endl;
    Camiones* camion1 = new Camiones("CAM301", 3);
    vehiculos.push_back(camion1);
    cout << camion1->getTipo()<< "-" << *camion1 << endl;
    cout << "Valor a pagar: " << camion1->cobrar() << endl;

    //Caso 7
    cout << endl << "Caso 7:" << endl;
    camion1->agregarEje();
    cout << camion1-> getTipo()<< "-" << *camion1<< endl;
    cout << "Valor a pagar: " << camion1->cobrar() << endl;

    //Caso 8
    cout << endl << "Caso 8:" << endl;
    try {
        Carro* carro2 = new Carro("", 2);
    }
    catch (PlacaInvalidaException& e) {
        cout << "Error: " << e.what() << endl;
    }
    //Caso 9
    cout << endl << "Caso 9: "<< endl;
    try {
        Camiones* camion2 = new Camiones("WAZ111", 1);
    }
    catch (DatosInvalidos& e) {
        cout << "Error: " << e.what() << endl;
    }

    //Caso 10
    cout << endl << "Caso 10: "<< endl;
    Operador* operador1 = new Operador("Pablito", "19452", "OP01");
    Caseta* caseta = new Caseta(operador1);
    caseta->registrarPaso(carro1);
    // caseta->registrarPaso(moto1);(LA MOTO NO SE CREO DEBIDO A LA EXCEPCION DE PLACA INVALIDA)
    caseta->registrarPaso(bus1);
    caseta->registrarPaso(camion1);
    cout << "Recaudo total: " << caseta->getTotalRecibido()<< endl;
    cout << "Nro de carros: " << caseta->getCantidadC() << endl;
    cout << "Nro de motos: " << caseta->getCantidadM() << endl;
    cout << "Nro de buses: " << caseta->getCantidadB()<< endl;
    cout << "Nro de camiones: " << caseta->getCantidadCamiones() << endl;
    cout << "Total de pasos en el peaje: "<< caseta->getTotalV() <<endl;

    //Caso 11



}   