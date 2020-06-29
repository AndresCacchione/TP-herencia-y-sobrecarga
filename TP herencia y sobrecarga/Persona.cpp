#include "Persona.h"

Fecha::Fecha(int dia=0, int mes=0, int anio=0)
{
    _dia=dia;
    _mes=mes;
    _anio=anio;
}

Direccion::Direccion(char *calle="NN", unsigned int numero= 0, char *localidad="NN")
{
    strcpy(_calle,calle);
    _numero=numero;
    strcpy(_localidad,localidad);
}

Persona::Persona(char* nombre="NN", char* apellido="NN",Direccion domicilio=Direccion dom(), unsigned long int dni=0,Fecha fecha, unsigned long int telefono=0)
{
    int tam=strlen(nombre);
    _nombre= new char[tam+1];
    if(_nombre==NULL)
        exit(1);
    strcpy(_nombre,nombre);

    tam=strlen(apellido);
    _apellido= new char[tam+1];
    if(_apellido==NULL)
        exit(1);
    strcpy(_apellido,apellido);

    _domicilio=domicilio;
    _dni=dni;
    _fechaNacimiento=fecha;
    _numeroTelefono=telefono;
}

bool Fecha::operator==(Fecha fechaComp)
{
    if(this->_dia==fechaComp._dia)
        if(this->_mes==fechaComp._mes)
            if(this->_anio==fechaComp._anio)
                return true;
    return false;
}

bool Fecha::operator > (Fecha fechaComp)
{
    if(this->_anio>fechaComp._anio) return true;
    if(this->_anio<fechaComp._anio) return false;

    if(this->_mes>fechaComp._mes) return true;
    if(this->_mes<fechaComp._mes) return false;

    if(this->_dia>fechaComp._dia) return true;
return false;
}

bool Fecha::bisiesto()
{
    if ((_anio%4==0 && _anio%100 !=0) || _anio%400==0 )return true;
    return false;
}

void Fecha::operator += (int entero)
{
    this->_dia+=entero;
    int vec [12]= {31,0,31,30,31,30,31,31,30,31,30,31};

    if (_mes ==2 && this->bisiesto())
    {
        if(_dia>28 + bisiesto())
        {
            _dia-=28 +bisiesto();
            _mes++;
        }
    }
    else
    {
        for (int i=0; i<12; i++)
        {
            if (_dia >vec [i])
            {
                _dia-=vec[i];
                _mes++;
                break;
            }
        }

    }

    if (_mes > 12)
    {
        _mes-=12;
        _anio++;
    }
}

bool Fecha::operator==(const char *mes)
{
    char matriz[12,30]= {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre",
    "Octubre", "Noviembre", "Diciembre"};

    for(int i=0; i<12;i++)
    {
        if(this->_mes==i+1)
        {
            if(strcmp(mes,matriz[i+1])==0) return true;
        }
    }
return false;
}

Persona::~Persona()
{
    delete _nombre;
    delete _apellido;
}
