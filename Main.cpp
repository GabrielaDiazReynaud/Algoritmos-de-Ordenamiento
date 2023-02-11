
#include <iostream>
#include "Lista.h"
#include "Algoritmos.h"
#include <chrono>
using namespace std::chrono;
using namespace std;


int main(){
Algoritmos procedimientos;
int inputArray1[6] = { 1,7,9,4,5,6 };
Lista inputList1;
inputList1.AgregarElemento(1);
inputList1.AgregarElemento(7);
inputList1.AgregarElemento(9);
inputList1.AgregarElemento(4);
inputList1.AgregarElemento(5);
inputList1.AgregarElemento(6);

cout << "-----BUBBLE SORT-----" << endl;
cout << endl << "*Elementos = ";
inputList1.imprimirLista();
cout << endl << endl << "ARREGLO---" << endl;
auto start11 = high_resolution_clock::now();
int* outputArray1 = procedimientos.bubbleSortArray(inputArray1);
auto stop11 = high_resolution_clock::now();
auto duration11 = duration_cast<microseconds>(stop11 - start11);
cout << " 1.Resultado=  ";
for (int x = 0; x < 6; x++) {
	cout << outputArray1[x] << " ";
}
cout << endl<<" 2.Duracion microsegundos=  "<<duration11.count();
cout << endl << endl << "LISTA---" << endl;
auto start12 = high_resolution_clock::now();
Lista outputList1 = procedimientos.bubbleSortList(inputList1);
auto stop12 = high_resolution_clock::now();
auto duration12 = duration_cast<microseconds>(stop12 - start12);
cout << " 1.Resultado=  ";
outputList1.imprimirLista();
cout << " 2.Duracion microsegundos=  " << duration12.count() << endl << endl;




int inputArray2[6] = { 38,11,12,13,14,15 };
Lista inputList2;
inputList2.AgregarElemento(38);
inputList2.AgregarElemento(11);
inputList2.AgregarElemento(12);
inputList2.AgregarElemento(13);
inputList2.AgregarElemento(14);
inputList2.AgregarElemento(15);

cout <<endl<<endl << endl << endl << "-----COUNT SORT-----" << endl;
cout << endl << "*Elementos = ";
inputList2.imprimirLista();
cout << endl << endl << "ARREGLO---" << endl;
auto start21 = high_resolution_clock::now();
int* outputArray2 = procedimientos.countSortArray(inputArray2);
auto stop21 = high_resolution_clock::now();
auto duration21 = duration_cast<microseconds>(stop21 - start21);
cout << " 1.Resultado=  ";
for (int x = 0; x < 6; x++) {
	cout << outputArray2[x] << " ";
}
cout <<endl<< " 2.Duracion microsegundos=  " << duration21.count();
cout << endl << endl << "LISTA---" << endl;
auto start22 = high_resolution_clock::now();
Lista outputList2 = procedimientos.countSortList(inputList2);
auto stop22 = high_resolution_clock::now();
auto duration22 = duration_cast<microseconds>(stop22 - start22);
cout << " 1.Resultado=  ";
outputList2.imprimirLista();
cout << " 2.Duracion microsegundos=  " << duration22.count() << endl << endl;




int inputArray3[6] = { 77,2,1,6,8,23 };
Lista inputList3;
inputList3.AgregarElemento(77);
inputList3.AgregarElemento(2);
inputList3.AgregarElemento(1);
inputList3.AgregarElemento(6);
inputList3.AgregarElemento(8);
inputList3.AgregarElemento(23);

cout <<endl<<endl<<endl << endl <<"-----INSERTION SORT-----" << endl;
cout << endl << "*Elementos = ";
inputList3.imprimirLista();
cout << endl << endl << "ARREGLO---" << endl;
auto start31 = high_resolution_clock::now();
int* outputArray3 = procedimientos.insertionSortArray(inputArray3);
auto stop31 = high_resolution_clock::now();
auto duration31 = duration_cast<microseconds>(stop31 - start31);
cout << " 1.Resultado=  ";
for (int x = 0; x < 6; x++) {
	cout << outputArray3[x] << " ";
}
cout << endl << " 2.Duracion microsegundos=  " << duration31.count();
cout << endl << endl << "LISTA---" << endl;
auto start32 = high_resolution_clock::now();
Lista outputList3 = procedimientos.insertionSortList(inputList3);
auto stop32 = high_resolution_clock::now();
auto duration32 = duration_cast<microseconds>(stop32 - start32);
cout << " 1.Resultado=  ";
outputList3.imprimirLista();
cout << " 2.Duracion microsegundos=  " << duration32.count()<<endl<<endl;


int inputArray4[6] = { 8,31,30,29,28,27 };
Lista inputList4;
inputList4.AgregarElemento(32);
inputList4.AgregarElemento(31);
inputList4.AgregarElemento(30);
inputList4.AgregarElemento(29);
inputList4.AgregarElemento(28);
inputList4.AgregarElemento(27);
cout <<endl<<endl<<endl << endl<< "-----SELECTION SORT-----" << endl;
cout << endl << "*Elementos = ";
inputList4.imprimirLista();
cout << endl <<"ARREGLO---" << endl;
auto start41 = high_resolution_clock::now();
int* outputArray4 = procedimientos.selectionSortArray(inputArray4);
auto stop41 = high_resolution_clock::now();
auto duration41 = duration_cast<microseconds>(stop41 - start41);
cout << " 1.Resultado=  ";
for (int x = 0; x < 6; x++) {
	cout << outputArray4[x] << " ";
}
cout << endl << " 2.Duracion microsegundos=  " << duration41.count();
cout << endl << endl << "LISTA---" << endl;
auto start42 = high_resolution_clock::now();
Lista outputList4 = procedimientos.selectionSortList(inputList4);
auto stop42 = high_resolution_clock::now();
auto duration42 = duration_cast<microseconds>(stop42 - start42);
cout << " 1.Resultado=  ";
outputList4.imprimirLista();
cout << " 2.Duracion microsegundos=  " << duration42.count() << endl << endl;




   



}