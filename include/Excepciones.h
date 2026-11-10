#pragma once
#include <exception>
#include <string>

using namespace std;
class PlacaInvalidaException : public exception{
private:
    string msj;
public:
PlacaInvalidaException (string msj);
const char*what() const noexcept override;
};
class DatosInvalidos : public exception{
private:
    string msj;
public:
DatosInvalidos (string msj);
const char*what() const noexcept override;
};