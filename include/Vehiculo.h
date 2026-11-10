#pragma once
#include <iostream>
#include <string>

using namespace std;
class Vehiculo{
    protected:
    string placa;
    public:
    Vehiculo(string placa);
    virtual ~Vehiculo();
    virtual string getTipo() const;
    virtual string info()const;
    virtual int cobrar() const = 0;
};
ostream &operator << (ostream &os, const Vehiculo &vehiculo);