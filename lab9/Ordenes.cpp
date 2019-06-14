#include "Ordenes.h"
Ordenes::Ordenes(){
    cliente="0";
    negocio="0";
    repartidor="0";
    tipo="0";
    estado="0";
}
Ordenes::Ordenes(string ncliente, string nnegocio, string nrepartidor, string ntipo, string nestado){
    cliente=ncliente;
    negocio=nnegocio;
    repartidor=nrepartidor;
    tipo=ntipo;
    estado=ntipo;
}
void Ordenes::setEstado(string estados){
    estado=estados;
}