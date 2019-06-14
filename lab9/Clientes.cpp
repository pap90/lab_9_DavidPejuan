#include "Clientes.h"
Clientes::Clientes(){
    direccion="dire";
    telefono=0;
    tarjeta=0;
    pedidos=0;
}
Clientes::Clientes(string nnombre,double nidentidad, int nedad,int nganancias,string ndireccion,int ntelefono,double ntarjeta, int npedidos):Personas(nnombre, nidentidad, nedad, nganancias){
    nombre=nnombre;
    identidad=nidentidad;
    edad=nedad;
    ganancias=nganancias;
    direccion=ndireccion;
    telefono=ntelefono;
    tarjeta=ntarjeta;
    pedidos=npedidos;
}
string Clientes::getDireccion(){
    return direccion;
}
int Clientes::getTelefono(){
    return telefono;
}
double Clientes::getTarjeta(){
    return tarjeta;
}
int Clientes::getPedidos(){
    return pedidos;
}
void Clientes::setDireccion(string nuevdireccion){
    direccion=nuevdireccion;
}
void Clientes::setTelefono(int nuevtelefono){
    telefono=nuevtelefono;
}
void Clientes::setTarjeta(double nuevtarjeta){
    tarjeta=nuevtarjeta;
}
void Clientes::setPedidos(int nuevpedidos){
    pedidos=nuevpedidos;
}
int Clientes::Ganancias(){
    ganancias=pedidos*-100;
}