#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>


using namespace std;

class package{
protected:
  char remitente[50];
  char destinatario[50];
  float kilos;
  float costoKg;

public:
  package();
  package(char remit, char dest, float kg, float c);
  char getDestinatario();
  char getRemitente();
  float calCosto();
};

package::package(){
  remitente = "Undefined";
  destinatario = "Undefined";
  kilos = 0;
  costoKg = 0;
}

package::package(char remit, char dest, float kg, float c){
  remitente = remit;
  destinatario = dest;
  kilos = kg;
  costoKg = c;
}

char package::getDestinatario(){
  return destinatario;
}

char package::getRemitente(){
  return remitente;
}

float package::calCosto(){
  float costoF;
  costoF = kilos * costoKg;
  return costoF;
}






