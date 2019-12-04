//Julio Cesar Perez Rodriguez
//A01705763

#include <iostream>
#include<string>
#include "Figura3D.h"
using namespace std;

int main(){

  //Probamos los constructores de cada clase para crear un objeto de cada una y calcular sus volumenes y areas
  Cono cono= Cono(3.0,2.0);
  cout<<"Volumen del cono: "<<cono.setCalcularVolumen()<<"\n";
  cout<<"Area de la Base del cono: "<<cono.setAreaBase()<<"\n";
  cout<<"Area Lateral del cono: "<<cono.setAreaLateral()<<"\n";
  cout<<"Area total del cono: "<<cono.setCalcularArea()<<"\n \n";

  Cilindro cilindro= Cilindro(3.0,2.0);
  cout<<"Volumen del cilindro: "<<cilindro.setCalcularVolumen()<<"\n";
  cout<<"Area de la Base del cilindro: "<<cilindro.setAreaBase()<<"\n";
  cout<<"Area Lateral del cilindro: "<<cilindro.setAreaLateral()<<"\n";
  cout<<"Area total del cilindro: "<<cilindro.setCalcularArea()<<"\n \n";

  Esfera esfera= Esfera(3.0);
  cout<<"Volumen de la esfera: "<<esfera.setCalcularVolumen()<<"\n";
  cout<<"Area total de la esfera: "<<esfera.setCalcularArea()<<"\n \n";

  //Probamos cambiar el valor del radio de la esfera
  cout<<"Cambio radio esfera de "<<esfera.getRadio()<<" a ";
  esfera.setRadio(5.0);
  cout<<esfera.getRadio()<<"\n \n";

  //Calculamos el volumen y area de la esfera con el nuevo radio
  cout<<"Volumen de la esfera: "<<esfera.setCalcularVolumen()<<"\n";
  cout<<"Area total de la esfera: "<<esfera.setCalcularArea()<<"\n \n";

  //Creamos un nuevo obejto de la clase Cono
  Cono cono2= Cono(4.0,2.0);
  //Calculamos el volumen y las areas del cono2
  cout<<"Volumen del cono 2: "<<cono2.setCalcularVolumen()<<"\n";
  cout<<"Area de la Base del cono 2: "<<cono2.setAreaBase()<<"\n";
  cout<<"Area Lateral del cono 2: "<<cono2.setAreaLateral()<<"\n";
  cout<<"Area total del cono 2: "<<cono2.setCalcularArea()<<"\n \n";

  //Cambiamos su altura
  cout<<"Cambio altura del 'cono 2' de "<<cono2.getAltura()<<" a ";
  cono2.setAltura(10.0);
  cout<<cono2.getAltura()<<"\n \n";

  //Calculamos el nuevo volumen y las nuevas areas del cono2
  cout<<"Volumen del cono 2: "<<cono2.setCalcularVolumen()<<"\n";
  cout<<"Area de la Base del cono 2: "<<cono2.setAreaBase()<<"\n";
  cout<<"Area Lateral del cono 2: "<<cono2.setAreaLateral()<<"\n";
  cout<<"Area total del cono 2: "<<cono2.setCalcularArea()<<"\n \n";

}