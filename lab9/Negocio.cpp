#include "Negocio.h"
Negocio::Negocio(){
    nombre="0";
    ubicacion="0";
    locales=0;
}
Negocio::Negocio(string nnombre, string nubicacion, int nlocales, vector<Productos*> vec){
    nombre=nnombre;
    ubicacion=nubicacion;
    locales=nlocales;
    productos=vec;
}
string Negocio::getNombre(){
    return nombre;
}