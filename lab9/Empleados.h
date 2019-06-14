#include "Personas.h"
#ifndef EMPLEADOS_H
#define EMPLEADOS_H

class Empleados:public Personas
{
private:
    int horas;
    string local;
    int ordenes;
public:
    Empleados(/* args */);
    Empleados(string, double, int, int, int, string,int);
    int getOrdenes();
    void setOrdenes(int);
    virtual int Ganancias();

    //~Empleados();
};



#endif // !EMPLEADOS_H