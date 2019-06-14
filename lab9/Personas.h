#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <string>
using std::string;
class Personas
{
protected:
    string nombre;
    double identidad;
    int edad;
    int ganancias;
public:
    Personas(/* args */);
    Personas(string,double,int,int);
    virtual int Ganancias()=0;
    void setNombre(string);
    void setIdentidad(double);
    void setEdad(int);
    void setGanancias(int);
    string getNombre();
    double getIdentidad();
    int getEdad();
    int getGanancias();
    //~Personas();
};



#endif // !PERSONAJE_H