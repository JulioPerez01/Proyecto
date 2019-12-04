//Julio Cesar Perez Rodriguez
//A01705763

#include <iostream>
#include<math.h>
#include "Figura2D.h"

//La clase Figur3D es la super clase
class Figura3D{
  
  //Declaramos las variables protected que heredaran las subclases
  protected:
    float radio;
    float volumen;
    float PI=3.1416;
    float area;

  public:
    //Declaramos un constructor vacio
    Figura3D();
    //Declaramos un constructor con atributos
    Figura3D(float r){
      radio=r;
    }
    //Declaramos un set por si queremos cambiar el valor de r
    void setRadio(float r){
      radio=r;
    }

    //Declaramos las funciones virtuales que modificaremos en las subclases
    virtual float setCalcularVolumen()=0;
    virtual float setCalcularArea()=0;

    //Declaramos los getters
    float getRadio(){
      return radio;
    }

    float getVolumen(){
      return volumen;
    }
    
    float getArea(){
      return area;
    }
};

//Creamos la subclase Esfera que hereda de Figura3D
class Esfera:public Figura3D{
  //Declaramos lis constructores y funciones publicas
  public:
    //Declaramos un constructor vacio
    Esfera();
    //Declaramos un constructor con atributos y que herede de Figura3D
    Esfera(float r):Figura3D(r){
      radio=r;
    }
    //Usando polimorfismo cambiamos la funcion calcular volumen para que tenga la formula de la esfera
    float setCalcularVolumen(){
      volumen=(4*PI*(radio*radio*radio))/3;  
      return volumen;
    }
    //Usando polimorfismo cambiamos la guncion calcular area para que tenga la formula de la esfera
    float setCalcularArea(){
      area=(4*PI*(radio*radio));
      return area;
    }
};

//Declaramso la subclase Cono que hereda de Figura3D y Figura2D
class Cono:public Figura3D, public Figura2D{
  //Declaramos las variables privadas que solo utilizaremos en esta clase
  private:
    float altura;
  //Declaramos los constructores y funciones que utilizaremos de manera publica
  public:
    //Declaramos el constructor vacio
    Cono();
    //Declaramos el constructor con atributos que herede de Figura3D
    Cono(float r,float a):Figura3D(r){
      radio=r;
      altura=a;
    }
    //Declaramos el setter
    void setAltura(float a){
      altura=a;
    }

    //Declaramos el getter
    float getAltura(){
      return altura;
    }

    //Usamos polimorfismo para cambiar lo que realiza las funciones de abajo para que nos funciones para calcular el volumen y las areas de un cono
    float setCalcularVolumen(){
      volumen=(PI*altura*(radio*radio))/3;
      return volumen;    
    }

    float setAreaBase(){
      areaBase=PI*(radio*radio);
      return areaBase;
    }

    float setAreaLateral(){
      areaLateral=PI*radio*(sqrt((altura*altura)+(radio*radio)));
      return areaLateral;
    }

    float setCalcularArea(){
      area=setAreaBase()+setAreaLateral();
      return area;
    }
};

//Declaramso la subclase Cilindro que hereda de Figura3D y Figura2D
class Cilindro:public Figura3D, public Figura2D{
  //Declaramos las variables privadas que solo utilizaremos en esta clase
  private:
    float altura;
  //Declaramos los constructores y funciones que utilizaremos de manera publica
  public:
    //Declaramos el constructor vacio
    Cilindro();
    //Declaramos el constructor con atributos que herede de Figura3D
    Cilindro(float r,float a):Figura3D(r){
      radio=r;
      altura=a;
    }

    //Declaramos el setter
    void setAltura(float a){
      altura=a;
    }

    //Declaramos el getter
    float getAltura(){
      return altura;
    }

    //Usamos polimorfismo para cambiar lo que realiza las funciones de abajo para que nos funciones para calcular el volumen y las areas de un cilindro
    float setCalcularVolumen(){
      volumen=PI*(radio*radio)*altura;
      return volumen;
    }

    float setAreaBase(){
      float areaBase=2*(PI*(radio*radio));
      return areaBase;
    }

    float setAreaLateral(){
      float areaLateral=2*PI*radio*altura;
      return areaLateral;
    }

    float setCalcularArea(){
      area=setAreaBase()+setAreaLateral();
      return area;
    }
};