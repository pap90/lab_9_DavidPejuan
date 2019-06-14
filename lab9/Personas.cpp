#include "Personas.h"
Personas::Personas(){
    nombre="persona1";
    identidad=0;
    edad=0;
    ganancias=0;
}
Personas::Personas(string nom, double id, int ed, int ga){
    nombre=nom;
    identidad=id;
    edad=ed;
    ganancias=ga;
}
void Personas::setEdad(int nedad){
    edad=nedad;
}
void Personas::setGanancias(int nganancias){
    ganancias=nganancias;
}
void Personas::setIdentidad(double nid){
    identidad=nid;
}
void Personas::setNombre(string nnombre){
    nombre=nnombre;
}
int Personas::getEdad(){
    return edad;
}
int Personas::getGanancias(){
    return ganancias;
}
double Personas::getIdentidad(){
    return identidad;
}
string Personas::getNombre(){
    return nombre;
}
