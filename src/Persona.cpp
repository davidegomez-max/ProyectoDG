#include "Persona.h"
Persona::Persona(string nombre, string documento) {
    this->nombre = nombre;
    this->documento = documento;
}
Persona::~Persona() {}
string Persona::descripcion() const {
    return "Nombre: " + nombre + "\nDocumento: " + documento;
}