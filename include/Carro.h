#pragma once 
#include "Vehiculo.h"
class Carro : public Vehiculo{
    private:
    int pasajeros;
    public:
    Carro (string placa, int pasajeros);
    ~Carro() override;
    int getPasajeros() const;
    string info() const override;
    int cobrar() const override;
};