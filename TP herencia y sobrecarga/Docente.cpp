#include "Docente.h"

Docente::Docente(int legajo=0, char* cargo="NN",Fecha fechaIngreso)
{
    _legajo=legajo;
    strcpy(_cargo, cargo);
    _fechaIngreso=fechaIngreso;
}

Docente::~Docente()
{
    Persona::~Persona();
}
