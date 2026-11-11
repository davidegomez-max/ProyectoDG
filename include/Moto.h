#pragma once
#include "Vehiculo.h"
class Moto : public Vehiculo{
    private:
        int  cilindraje;
    public:
        Moto(string placa, int cilindraje);
        int getCilindraje();
        string getTipo() const override;
        int cobrar() const override;
        string info() const override;
};