#include "Nodo.h"

Nodo::Nodo(int valorNuevo , Nodo * siguienteNodo){
      valor = valorNuevo;
      siguiente = siguienteNodo;
      anterior = nullptr;
}
