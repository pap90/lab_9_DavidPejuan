#include "Personas.h"
#ifndef CLIENTES_H
#define CLIENTES_H


class Clientes:public Personas
{
private:
    string direccion;
    int telefono;
    double tarjeta;
    int pedidos;
public:
    Clientes(/* args */);
    Clientes(string,double,int,int,string,int,double,int);
    virtual int Ganancias();
    string getDireccion();
    int getTelefono();
    double getTarjeta();
    int getPedidos();
    void setDireccion(string);
    void setTelefono(int);
    void setTarjeta(double);
    void setPedidos(int);
    //~Clientes();
};




#endif // !CLIENTES_H