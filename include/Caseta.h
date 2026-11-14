#pragma once
#include "Vehiculo.h"
#include "RegistroPaso.h"
#include "Operador.h"
#include <vector>

class Caseta{
Operador* operador;
vector<RegistroPaso*> registros;
int totalV;
int totalRecibido;
int cantidadC;
int cantidadM;
int cantidadB;
int cantidadCamiones;
public:
Caseta (Operador* operador);
~Caseta();
void registrarPaso(Vehiculo* vehiculo);
void cerrarCaja(int efectivoCaja);
int getTotalV() const;
int getTotalRecibido() const;
int getCantidadC() const;
int getCantidadM() const;
int getCantidadB() const;
int getCantidadCamiones() const;
void cerrarCaja(int efectivoCaja);
};