#pragma once
#include <iostream>
#include <string>
using namespace std;
class Persona {
    protected:
    string nombre;
    string documento;
    public:
    Persona(string nombre, string documento);
    virtual ~Persona();
    virtual string descripcion() const;
};