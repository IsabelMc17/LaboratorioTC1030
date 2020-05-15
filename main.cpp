/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 15-Mayo-2020
 * Autor: A01706706 María Isabel Moreno Cornejo
 *
 *----------------------------------*/

 #include <iostream>
 #include "triangulo.h"
 using namespace std;

int main(){
  Triangulo a;
  Triangulo b(1, 10, 15);
  Triangulo c(2, 8, 12);
  float lado;
  float base;

  cout << "\n";
  a.toString();
  cout << "\n";
  b.toString();
  cout << "\n";
  c.toString();

  cout << "\nIngresar el nuevo tamaño de los lados ";
  cin >> lado;
  c.setLadoA(lado);
  cout << "Ingresar el nuevo tamaño de la base ";
  cin >> base;
  c.setLadoB(base);
  c.toString();

   return 0;
 }
 