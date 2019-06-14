#include "Empleados.h"
Empleados::Empleados(){
    horas=0;
    local="0";
    ordenes=0;
}
Empleados::Empleados(string nnombre, double nid,int nedad, int nganancias,int nhoras,string nlocal, int noredenes):Personas(nnombre,nid,nedad,nganancias){
    nombre=nnombre;
    identidad=nid;
    edad=nedad;
    ganancias=nganancias;
    horas=nhoras;
    local=nlocal;
    ordenes=noredenes;
}
int Empleados::getOrdenes(){
    return ordenes;
}
void Empleados::setOrdenes(int nuevordenes){
    ordenes=nuevordenes;
}
int Empleados::Ganancias(){
    ganancias=(30*ordenes)+ordenes;
}