#include <iostream>
#include "Ordenes.h"
#include "Clientes.h"
#include "Repartidores.h"
#include "Empleados.h"
#include "Productos.h"
#include "Negocio.h"
#include "Personas.h"
using std::cout;
using std::cin;
using std::endl;

int main(){
    vector <Personas*> per;
    vector <Personas* > rep;
    vector <Negocio* > neg;
    vector <Ordenes* > ord;
    vector <Ordenes* > terminados;

    int opcion=0;
    while (opcion!=8)
    {
        cout<<"1) Crear Personas. "<<endl
            <<"2) Eliminar Personas. "<<endl
            <<"3) Crear Negocio. "<<endl
            <<"4) Eliminar negocio."<<endl
            <<"5) creacion de orden."<<endl
            <<"6) confirmacion de orden."<<endl
            <<"7) Cancelar orden."<<endl
            <<"8) Salir."<<endl
            <<"Ingrese una opcion: ";
        cin>>opcion;
        cout<<endl;
        switch (opcion)
        {
        case 1:{
                int opcion2=0;
                cout<<"1) crear Cliente."<<endl
                    <<"2) crear repartidor."<<endl
                    <<"3) Crear Empleado. "<<endl
                    <<"Ingrese opcion: ";
                cin>>opcion2;
                switch (opcion2)
                {
                case 1:{
                        string nombre;
                        double identidad;
                        int edad;
                        string direccion;
                        int telefono;
                        double tarjeta;
                        cout<<"Ingrese el nombre: ";
                        cin>>nombre;
                        cout<<endl;
                        cout<<"Ingrese la edad: ";
                        cin>>edad;
                        cout<<endl;
                        cout<<"Ingrese la identidad: ";
                        cin>>identidad;
                        cout<<endl;
                        cout<<"Ingrese la direccion: ";
                        cin>>direccion;
                        cout<<endl;
                        cout<<"Ingrese el numero telefonico: ";
                        cin>>telefono;
                        cout<<endl;
                        cout<<"Ingrese el numero de tarjeta: ";
                        cin>>tarjeta;
                        cout<<endl;
                        per.push_back(new Clientes(nombre,identidad,edad,0,direccion,telefono,tarjeta,0));
                        
                    }
                    break;
                case 2:{
                        string nombre;
                        double identidad;
                        int edad;
                        int ganancias;//
                        string placa;
                        string zona;
                        int ordenes;//
                        cout<<"Ingrese el nombre: ";
                        cin>>nombre;
                        cout<<endl;
                        cout<<"Ingrese la identidad: ";
                        cin>>identidad;
                        cout<<endl;
                        cout<<"Ingrese la edad: ";
                        cin>>edad;
                        cout<<endl;
                        cout<<"Ingrese la placa: ";
                        cin>>placa;
                        cout<<endl;
                        cout<<"Ingrese la zona preferida: ";
                        cin>>zona;
                        cout<<endl;
                        rep.push_back(new Repartidores(nombre,identidad,edad,0,placa,zona,0));
                    }
                    break;
                case 3:{
                        string nombre;
                        double identidad;
                        int edad;
                        int ganancias;//
                        int horas;//
                        string local;
                        int ordenes;//
                        cout<<"Ingrese el nombre: ";
                        cin>>nombre;
                        cout<<endl;
                        cout<<"Ingrese la identidad: ";
                        cin>>identidad;
                        cout<<endl;
                        cout<<"Ingrese la edad: ";
                        cin>>edad;
                        cout<<endl;
                        cout<<"Ingrese el local: ";
                        cin>>local;
                        cout<<endl;
                        per.push_back(new Empleados(nombre,identidad,edad,0,0,local,0));
                    }
                    break;
                default:
                    break;
                }
            }
            break;
        case 2:{
                
                for (int i = 0; i < per.size(); i++)
                {
                    cout<<i<<") "<<per[i]->getNombre()<<endl;
                }
                cout<<"seleccione la posicion que desea borrar: ";
                int posicion=0;
                cin>>posicion;
                per.erase(per.begin()+posicion);
                
            }
            break;
        case 3:{
                string nombre;
                string ubicacion;
                int locales;
                vector<Productos* > prod;
                cout<<"Ingrese el nombre: ";
                cin>>nombre;
                cout<<endl;
                cout<<"Ingrese el ubicacion: ";
                cin>>ubicacion;
                cout<<endl;
                cout<<"Ingrese el numero de locales: ";
                cin>>locales;
                cout<<endl;
                int resp=0;
                while (resp==0)
                {
                    cout<<"Ingrese el nombre del producto: ";
                    string nombrepro;
                    cin>>nombrepro;
                    cout<<endl<<"Inngrese si es comestible o no [si/no]: ";
                    string tipo;
                    cin>>tipo;
                    cout<<endl;
                    prod.push_back(new Productos(nombre,tipo));
                    cout<<"Desea ingresar otro producto? [0)si/1)no]";
                    cin>>resp;
                    cout<<endl;
                    
                }
                neg.push_back(new Negocio(nombre,ubicacion,locales,prod));
                

            }
            break;
        case 4:{
                for (int i = 0; i < neg.size(); i++)
                {
                    cout<<i<<") "<<neg[i]->getNombre()<<endl;
                }
                cout<<"seleccione la posicion que desea borrar: ";
                int posicion=0;
                cin>>posicion;
                per.erase(per.begin()+posicion);
            }
            break;
        case 5:{//crear orden
                for (int i = 0; i < per.size(); i++)
                {
                    cout<<i<<") "<<per[i]->getNombre()<<endl;
                }
                cout<<"seleccione el cliente que hizo la orden: ";
                int posicion=0;
                cin>>posicion;
                string nombre=per[posicion]->getNombre();

                for (int i = 0; i < neg.size(); i++)
                {
                    cout<<i<<") "<<neg[i]->getNombre()<<endl;
                }
                cout<<"seleccione el negocio de la orden: ";
                int posicionneg=0;
                cin>>posicionneg;
                string nego=neg[posicionneg]->getNombre();

                for (int i = 0; i < rep.size(); i++)
                {
                    cout<<i<<") "<<rep[i]->getNombre()<<endl;
                }
                cout<<"seleccione el repartidor: ";
                int posicionrep=0;
                cin>>posicionrep;
                string repa=rep[posicionrep]->getNombre();

                cout<<"Ingrese si es comestible o no: [si/no]: ";
                string tipo;
                cin>>tipo;
                ord.push_back(new Ordenes(nombre, nego,repa,tipo,"En proceso."));

            }
            break;
        case 6:{//confirmar orden
                for (int i = 0; i < ord.size(); i++)
                {
                    cout<<i<<endl;
                }
                cout<<"seleccione el numero de orden a confirmar: ";
                int posicionest=0;
                cin>>posicionest;
                ord[posicionest]->setEstado("confirmado");
                terminados.push_back(ord[posicionest]);
                ord.erase(ord.begin()+posicionest);
            }
            break;
        case 7:{//cancelar orden
                for (int i = 0; i < ord.size(); i++)
                {
                    cout<<i<<endl;
                }
                cout<<"seleccione el numero de orden a cancelar: ";
                int posicionest=0;
                cin>>posicionest;
                ord[posicionest]->setEstado("confirmado");
                terminados.push_back(ord[posicionest]);
                ord.erase(ord.begin()+posicionest);

            }
            break;
        default:
            break;
        }
    }
    
}