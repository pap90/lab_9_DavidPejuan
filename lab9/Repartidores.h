#include "Personas.h"
#ifndef REPARTIDORES_H
#define REPARTIDORES_H

class Repartidores: public Personas
{
private:
    string placa;
    string zonapreferida;
    int ordenes;
public:
    Repartidores(/* args */);
    Repartidores(string , double , int , int , string , string , int);
    int getOrdenes();
    void setOrdenes(int);
    virtual int Ganancias();
    //~Repartidores();

};


#endif // !REPARTIDORES_H