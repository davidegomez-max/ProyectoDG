#pragma once
#include "Persona.h"

class Propietario : public Persona {
private:
    bool vecino;
public:
    Propietario(string nombre, string documento, bool vecino);
    bool esVecino() const;
    string descripcion() const override;
};