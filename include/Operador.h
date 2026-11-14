#pragma once
#include "Persona.h"

class Operador : public Persona{
    private:
    string codigo;
    public:
    Operador(string nombre, string documento, string codigoEmpleado);
    string descripcion() const override; 
};