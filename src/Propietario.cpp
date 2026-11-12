#include "Propietario.h"
Propietario::Propietario(string nombre, string documento, bool vecino) : Persona(nombre, documento), vecino(vecino) {
}
bool Propietario::esVecino() const {
    return vecino;
}
string Propietario::descripcion() const {
    return Persona::descripcion() + "Vecino: " + (vecino ? "Si" : "No");
}