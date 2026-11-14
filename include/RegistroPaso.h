#pragma once
#include<string>
using namespace std;

class RegistroPaso{
private:
    string placa;
    string tipoV;
    int valorCobrado;
public:
    RegistroPaso(string placa, string tipoV, int valorCobrado);
    ~RegistroPaso();
    string getPlaca()const;
    string getTipoV() const;
    int getValorCobrado() const;
};