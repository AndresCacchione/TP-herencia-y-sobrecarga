#ifndef PROVEEDOR_H
#define PROVEEDOR_H
#include "Persona.h"
#include <cstring>


class Proveedor:public Persona
{
    public:
        Proveedor(double, int, char);
        ~Proveedor();

    private:
        double _CUIL;
        int _producto;
        char _condicionPago;
};

#endif // PROVEEDOR_H
