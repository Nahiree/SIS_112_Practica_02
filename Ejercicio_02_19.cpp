/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 31/08/2023

Fecha modificaci�n: 31/08/2023

N�mero de ejericio: 19

Problema planteado:  Hacer un programa que inicialice un vector de n�meros con valores
aleatorios, y posterior  ordene los elementos de menor a mayor.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    srand((unsigned)time(0));
    int vector1[9], i, aux, j;
    for (i=0 ; i<9; i++){
    vector1[i]= (1+(rand()%+(100+1-1)));
    }
    for (i=0 ; i<9; i++){
    cout << vector1[i]<<", ";
    }
    cout <<  endl;
    for (i=0 ; i<9; i++){
    for (j=0; j<9 ; j++){
    if (vector1[j] > vector1[j+1]){
    aux= vector1[j];
    vector1[j] = vector1[j+1];
    vector1[j+1] = aux;
    }
    }
    }
    cout << "Ordenado de menor a mayor es:"<< endl;
    for (i=0 ; i<9; i++){
    cout << vector1[i]<<", ";
    }
return 0;
}
