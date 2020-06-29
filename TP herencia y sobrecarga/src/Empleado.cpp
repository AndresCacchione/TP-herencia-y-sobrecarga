#include "../include/Empleado.h"

Empleado::Empleado(int categoria=0, float sueldo=0, Fecha fechaIngreso()):Persona()
{
    _categoria=categoria;
    _sueldo=sueldo;
    _fechaIngreso=fechaIngreso;
}

