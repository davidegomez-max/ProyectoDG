#ifndef CAMIONES_H
#define CAMIONES_H
#include "Vehiculo.h"
class Camiones : public Vehiculo {
public:
	Camiones(string placa,int ejes);
	int cobrar() const override;
	string info() const override;
private:
	int ejes;
};

#endif

