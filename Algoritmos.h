#pragma once
#ifndef ALGORITMOS_H
#define ALGORITMOS_H
#include "Lista.h"
#include "Nodo.h"
#include <iostream>
using namespace std;
class Algoritmos{
 
 public :
    int * bubbleSortArray(int []);
    Lista bubbleSortList(Lista list);
    int * selectionSortArray(int []);
    Lista selectionSortList(Lista list);
    int * insertionSortArray(int []);
    Lista insertionSortList(Lista list);
    int * countSortArray(int []);
    Lista countSortList(Lista list);
    int maxArray(int [], int);
    int maxList(Lista list);


};
#endif