#pragma once
#include "Vehiculo.h"
#include "Variante.h"
#include "Excepciones.h"
class Moto : public Vehiculo{
    private:
        int  cilindraje;
    public:
        Moto(string placa, int cilindraje);
        ~Moto() override;
        int getCilindraje();
        string getTipo() const override;
        int cobrar() const override;
        string info() const override;
};