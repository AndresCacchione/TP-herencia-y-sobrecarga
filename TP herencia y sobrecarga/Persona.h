#ifndef PERSONA_H
#define PERSONA_H
#include <cstring>

class Direccion
{
public:
    Direccion(char*, unsigned int, char*);
protected:
    char _calle[30];
    unsigned int _numero;
    char _localidad[30];
};

class Fecha
{
public:
    Fecha(int, int, int);
    bool operator ==(Fecha);
    bool operator > (Fecha);
    void operator += (int);
    bool bisiesto();
    bool operator ==(const char*);
protected:
    int _dia, _mes, _anio;
};

class Persona
{
    public:
        Persona(char*, char*,Direccion , unsigned long int,Fecha, unsigned long int);
        ~Persona();
    protected:
        char *_nombre;
        char *_apellido;
        Direccion _domicilio;
        unsigned long int _dni;
        Fecha _fechaNacimiento;
        unsigned long int _numeroTelefono;
};

#endif // PERSONA_H
