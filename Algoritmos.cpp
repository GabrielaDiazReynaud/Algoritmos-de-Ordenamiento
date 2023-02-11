#include "Algoritmos.h"


//ORDENAMIENTO BURBUJA ---------------------------------

// ARREGLO----------------------------------------------

int *Algoritmos::bubbleSortArray(int array[])
{
  int nElementos = 6;
  for (int x = 0; x < nElementos - 1; x++)
  {
    for (int y = 0; y < nElementos - 1; y++)
    {
      if (array[y] > array[y + 1])
      {
        int tmp = array[y];
        array[y] = array[y + 1];
        array[y + 1] = tmp;
      }
    }
  }
  return array;
} 

//LISTA ------------------------------------------------

Lista Algoritmos::bubbleSortList(Lista list)
{
  int nElementos = 6;

  for (int x = 0; x < nElementos - 1; x++)
  {
    Nodo *tmp = list.primero;
    Nodo *anterior = nullptr;
    while (tmp->siguiente != nullptr)
    {

      if (tmp->valor > tmp->siguiente->valor)
      { //30 >20
        if (anterior == nullptr)
        {
          Nodo *ntmp = tmp->siguiente;
          tmp->siguiente = ntmp->siguiente;
          ntmp->siguiente = tmp;
          tmp = ntmp;
          list.primero = ntmp;
        }
        else
        {
          Nodo *ntmp = tmp->siguiente;
          tmp->siguiente = ntmp->siguiente;
          ntmp->siguiente = tmp;
          anterior->siguiente = ntmp;
          tmp = ntmp;
        }
      }
      anterior = tmp;
      tmp = tmp->siguiente;
    }
  }
  return list;
}

//SELECTION SORT ---------------------------------------

// ARREGLO----------------------------------------------

int *Algoritmos::selectionSortArray(int array[])
{
  int nElementos = 6;
  int elemntos = 0;
  int posicion = 0;
  for (int x = 0; x < nElementos - 1; x++)
  {
    int menor = array[elemntos];

    for (int y = elemntos; y < nElementos; y++)
    {
      if (array[y] <= menor)
      {
        menor = array[y];
        posicion = y;
      }
    }
    int tmp = array[elemntos];
    array[elemntos] = array[posicion];
    array[posicion] = tmp;
    elemntos += 1;
  }
  return array;
}

//LISTA ------------------------------------------------
Lista Algoritmos::selectionSortList(Lista list)
{
  int nElementos = 6;
  Nodo *actual = list.primero;
  Nodo *tmp = list.primero;
  for (int x = 0; x < nElementos - 1; x++)
  {
    Nodo *menor = tmp;
    while (tmp != nullptr)
    {
      if (tmp->valor <= menor->valor)
      {
        menor = tmp;
      }
      tmp = tmp->siguiente;
    }
    int tmpValor = actual->valor;
    actual->valor = menor->valor;
    menor->valor = tmpValor;
    tmp = actual->siguiente;
    actual = actual->siguiente;
  }
  return list;
}
//INSERTION SORT ---------------------------------------

//ARREGLO ------------------------------------------------
int *Algoritmos::insertionSortArray(int array[])
{
  int nElementos = 6;
  int xActual = 0;
  for (int x = 0; x < nElementos; x++)
  {

    xActual = x;
    for (int y = x; y > 0; y--)
    {
      if (array[x] <= array[y - 1])
      {
        int tmp = array[x];
        array[x] = array[y - 1];
        array[y - 1] = tmp;
        x = y - 1;
      }
    }
    x = xActual;
  }
  return array;
}

//LIST  --------------------------------------------------
Lista Algoritmos::insertionSortList(Lista list)
{
  int nElementos = 6;
  Nodo *actual = list.primero;
  Nodo *tmp = list.primero;
  for (int x = 0; x < nElementos; x++)
  {
    tmp = actual;
    while (actual->anterior != nullptr)
    {
      if (actual->valor <= actual->anterior->valor)
      {
        int tmpV = actual->valor;
        actual->valor = actual->anterior->valor;
        actual->anterior->valor = tmpV;
      }
      actual = actual->anterior;
    }
    actual = tmp;
    actual = actual->siguiente;
  }
  return list;
}

//COUNT SORT ---------------------------------------------
//ARREGLO ------------------------------------------------
int *Algoritmos::countSortArray(int array[])
{
  int nElementos = 6;
  int max = maxArray(array, nElementos);
  int maxFinal = max + 1;
  int * countArray= new int[maxFinal];
  int* output1 = new int[nElementos];
  for (int x = 0; x < nElementos; x++)
  {
    output1[x] = 0;
  }
  for (int x = 0; x < max + 1; x++)
  {
    countArray[x] = 0;
  }
  for (int x = 0; x < nElementos; x++)
  {
    int index = array[x];
    countArray[index] += 1;
  }
  for (int x = 0; x < max + 1; x++)
  {
    if (x != 0)
    {
      countArray[x] += countArray[x - 1];
    }
  }
  for (int x = 0; x < nElementos; x++)
  {
    int index = array[x];
    int nuevoIndex = countArray[index] - 1;
    output1[nuevoIndex] = array[x];
    countArray[index] -= 1;
  }
  for (int x = 0; x < nElementos; x++)
  {
    array[x] = output1[x];
  }

  return array;
}

//LISTA ------------------------------------------------
Lista Algoritmos::countSortList(Lista list)
{
  int max = maxList(list);
  int maxFinal = max + 1;
  int* countArray = new int[maxFinal];
  
  int nElementos = 0;
  for (int x = 0; x < max + 1; x++)
  {
    countArray[x] = 0;
  }
  Nodo *tmp = list.primero;
  while (tmp != nullptr)
  {
    int index = tmp->valor;
    countArray[index] += 1;
    nElementos++;
    tmp = tmp->siguiente;
  }

  int* output1 = new int[nElementos];
  for (int x = 0; x < nElementos; x++)
  {
    output1[x] = 0;
  }
  for (int x = 0; x < max + 1; x++)
  {
    if (x != 0)
    {
      countArray[x] += countArray[x - 1];
    }
  }
  Nodo *tmp2 = list.primero;
  while (tmp2 != nullptr)
  {
    int index = tmp2->valor;
    int nuevoIndex = countArray[index] - 1;
    output1[nuevoIndex] = tmp2->valor;
    countArray[index] -= 1;
    tmp2= tmp2->siguiente;
  }
  Nodo *tmp3 = list.primero;
  int indexF=0;
  while (tmp3 != nullptr)
  {
    tmp3->valor= output1[indexF];
    tmp3= tmp3->siguiente;
    indexF++;
  }
  

  return list;
}

int Algoritmos::maxArray(int array[], int nElementos)
{
  int mayor = array[0];
  for (int x = 0; x < nElementos; x++)
  {
    if (array[x] >= mayor)
    {
      mayor = array[x];
    }
  }
  return mayor;
}
int Algoritmos::maxList(Lista list)
{
  int mayor = list.primero->valor;
  Nodo *tmp = list.primero;

  while (tmp != nullptr)
  {

    if (tmp->valor >= mayor)
    {
      mayor = tmp->valor;
    }
    tmp = tmp->siguiente;
  }
  return mayor;
}
