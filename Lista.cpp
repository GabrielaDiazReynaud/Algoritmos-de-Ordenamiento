#include "Lista.h"
#include <iostream>
using namespace std;
Lista::Lista(){
    
}
void Lista::AgregarElemento(int x){
    Nodo * nuevo = new Nodo(x,nullptr);
  if(primero == nullptr){
      primero = nuevo;
  }
  else{
      Nodo * tmp = primero;
      while(tmp->siguiente!=nullptr){
          tmp = tmp->siguiente;
      }
      nuevo->anterior=tmp;
      tmp->siguiente= nuevo;
      
  }
}

void Lista::imprimirLista(){
     Nodo * tmp = primero;
      while(tmp->siguiente!=nullptr){
          cout<<tmp->valor<<" ";
          tmp = tmp->siguiente;
      }
      cout<<tmp->valor<<endl;
}