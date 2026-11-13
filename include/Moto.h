#pragma once
#include "Vehiculo.h"
#include "Variante.h"
#include "Excepciones.h"
#include "Propietario.h"
class Moto : public Vehiculo{
    private:
        int  cilindraje;
    public:
        Moto(string placa, int cilindraje);
        ~Moto() override;
        int getCilindraje()const ;
        string getTipo() const override;
        int cobrar() const override;
        string info() const override;
};