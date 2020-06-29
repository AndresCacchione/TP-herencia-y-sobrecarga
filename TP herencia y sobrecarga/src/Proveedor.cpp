#include "../include/Proveedor.h"


Proveedor::Proveedor(double cuil=0 , int producto=0, char condicionPago='N'):Persona()
{
    _CUIL=cuil;
    _producto=producto;
    _condicionPago=condionPago;
}

