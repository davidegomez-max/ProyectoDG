#include "Excepciones.h"
PlacaInvalidaException::PlacaInvalidaException(string msj) {
this->msj = msj;
}
const char* PlacaInvalidaException::what() const noexcept {
return msj.c_str();
}
DatosInvalidos::DatosInvalidos(string msj) {
    this->msj = msj;
}

const char* DatosInvalidos::what() const noexcept {
    return msj.c_str();
}
