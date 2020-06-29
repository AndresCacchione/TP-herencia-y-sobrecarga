#ifndef DOCENTE_H
#define DOCENTE_H
#include "Persona.h"

class Docente: public Persona
{
    public:
        Docente(int, char*,Fecha);
        ~Docente();

    private:
        int _legajo;
        char _cargo[15];
        Fecha _fechaIngreso;
};

#endif // DOCENTE_H
