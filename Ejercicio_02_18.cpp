/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 30/08/2023

Fecha modificaci�n: 30/08/2023

N�mero de ejericio: 18

Problema planteado:  Programa que declare un vector de diez elementos enteros y pida
n�meros para rellenarlo  hasta que se llene el vector o se introduzca un n�mero negativo.
Entonces se debe imprimir el  vector (s�lo los elementos introducidos).
*/
#include <iostream>

using namespace std;

int main (){
    int vector1[10];
    int contador = 0, i;
    for (i=0; i<10 ; i++){
    do {
    cout << "Ingresa un numero por favor: ";
    cin >> vector1[i];
    }
    while (vector1[i] >=0);
    }
    for (i=0 ; i < 10 ; i++){
    cout << vector1[i]<<endl;
    }
    return 0;
}
