#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

class Triangulo{
protected:
  float sideA, sideB;
  int idTr;
  
public: 
  Triangulo();
  Triangulo(int id, float sA, float sB);
  int getIdTr();
  float getLadoA() const;
  float getLadoB() const;
  float calcArea() const;
  float calcPerimetro() const;
  void setLadoA(float sA);
  void setLadoB(float sB);
  void toString() const;

};

Triangulo::Triangulo(){
  idTr = 0;
  sideA = 0;
  sideB = 0;
}

Triangulo::Triangulo(int id, float sA, float sB){
  idTr = id;
  sideA = sA;
  sideB = sB;
}

int Triangulo::getIdTr(){
  return idTr;
}

float Triangulo::getLadoA()const{
  return sideA;
}

float Triangulo::getLadoB()const{
  return sideB;
}

void Triangulo::setLadoA(float sA){
  sideA = sA;
}

void Triangulo::setLadoB(float sB){
  sideB = sB;
}

float Triangulo::calcArea()const{
    float perimetro;
    perimetro = (((sqrt(sideA*sideA - (sideB*sideB)/4))*sideB)/2);
    return perimetro;
}

float Triangulo::calcPerimetro()const{
    float area;
    area = (2*sideA + sideB);
    return area;
}
void Triangulo::toString()const{
  cout << "Triangulo " << idTr << "\nLados = " << sideA << "\nBase = " << sideB << "\nÁrea = " << calcArea() << "\nPerimetro = " << calcPerimetro() << endl;
}

#endif
