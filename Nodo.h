#pragma once
#ifndef NODO_H
#define NODO_H

#include<iostream>
class Nodo{
public:
int valor;
Nodo * siguiente;
Nodo * anterior;
Nodo(int, Nodo *);

};
#endif