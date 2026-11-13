#ifndef CAMIONES_H
#define CAMIONES_H
#include "Vehiculo.h"
class Camiones : public Vehiculo {
public:
	Camiones(string placa,int ejes);
	int cobrar() const override;
	string info() const override;
	~Camiones() override;
	int getEjes() const;
	string getTipo() const override;
	void agregarEje();
private:
	int ejes;
};

#endif

