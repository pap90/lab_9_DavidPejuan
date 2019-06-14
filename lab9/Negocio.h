#ifndef NEGOCIO_H
#define NEGOCIO_H
#include<string>
#include<vector>
#include "Productos.h"
using std::vector;
using std::string;

class Negocio
{
private:
    string nombre;
    string ubicacion;
    int locales;
    vector<Productos* > productos;

public:
    Negocio(/* args */);
    Negocio(string,string,int,vector<Productos*>);
    string getNombre();
    string getUbicacion();
    vector<Productos> getProductos();
    void setProductos(vector<Productos*>);
    //~Negocio();
};



#endif // !NEGOCIO_H