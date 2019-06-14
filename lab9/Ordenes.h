#ifndef ORDENES_H
#define ORDENES_H
#include <string>
using std::string;

class Ordenes
{
private:
    string cliente;
    string negocio;
    string repartidor;
    string tipo;
    string estado;


public:
    Ordenes(/* args */);
    Ordenes(string,string,string,string,string);
    void setEstado(string);

    //~Ordenes();
};




#endif // !ORDENES_H