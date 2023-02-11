#pragma once
#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>
class Lista{
 public:
  Lista();
  Nodo * primero;
  void AgregarElemento(int);
  void imprimirLista();
};
#endif
