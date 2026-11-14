#include "Operador.h"

Operador::Operador(string nombre, string documento, string codigo): Persona(nombre, documento), codigo(codigo){}
string Operador::descripcion() const {
    return Persona::descripcion() + "Codigo del empleado: " + codigo;
}