#include "Repartidores.h"
Repartidores::Repartidores(){
    placa="0";
    zonapreferida="0";
    ordenes=0;
}
Repartidores::Repartidores(string nnombre,double nidentidad,int nedad,int nganancias,string nplaca,string nzona, int nordenes):Personas(nnombre,nidentidad,nedad,nganancias){
    nombre=nnombre;
    identidad=nidentidad;
    edad=nedad;
    ganancias=nganancias;
    placa=nplaca;
    zonapreferida=nzona;
    ordenes=nordenes;
}
int Repartidores::getOrdenes(){
    return ordenes;
}
void Repartidores::setOrdenes(int nuevord){
    ordenes=nuevord;
}
int Repartidores::Ganancias(){
    ganancias=40*ordenes;
}