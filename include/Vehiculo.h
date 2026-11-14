#pragma once
#include <iostream>
#include <string>
#include "Variante.h"
using namespace std;
class Propietario;
class Vehiculo{
    protected:
    string placa;
    Propietario* propietario;
    public:
    Vehiculo(string placa);
    virtual ~Vehiculo();
    virtual string getTipo() const;
    virtual string info()const;
    virtual int cobrar() const = 0;
    void setPropietario(Propietario* propietario);
    string getPlaca() const;
};

ostream &operator << (ostream &os, const Vehiculo &vehiculo);