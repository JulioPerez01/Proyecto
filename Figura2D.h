//Julio Cesar Perez Rodriguez
//A01705763

#include <iostream>

class Figura2D{
  //Declaramos la variables protected que usaremos en las funciones virtuales
  protected:
    float areaBase;
    float areaLateral;
  //Declaramos las funciones virtuales publicas que luego usaremos para calcular las areas
  public:
    //Las declaramos de manera virtual para poder hacer polimorfismos y porderlas cambiar en base a la formula que ocupemos
    virtual float setAreaBase()=0;
    virtual float setAreaLateral()=0;
};