Emergencia.h
#pragma once 
#include <string>
using namespace std;

class Emergencia{
    protected:
    string unidad;
    string descripcion;
    bool enEmergencia;
    public:
    Emergencia(string unidad, string descripcion, bool enEmergencia);
    void setUnidad (string unidad); 
    void setDescripcion(string descripcion)
    void setEnEmergencia(bool enEmergencia
    string getUnidad();
    string getDescripcion();
    bool getEmergencia();
    }