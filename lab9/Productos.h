#ifndef PRODUCTOS_H
#define PRODUCTOS_H
#include <string>
using std::string;

class Productos
{
private:
    string nombre;
    string tipo;
public:
    Productos(/* args */);
    Productos(string,string);
    
    //~Productos();
};



#endif // !PRODUCTOS_H