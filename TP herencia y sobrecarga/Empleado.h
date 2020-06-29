#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Persona.h"

class Empleado:public Persona
{
    public:
        Empleado(int, float, Fecha);
        ~Empleado();

    private:
        int _categoria;
        float _sueldo;
        Fecha _fechaIngreso;
};

#endif // EMPLEADO_H
