/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 30/08/2023

Fecha modificaci�n: 31/08/2023

N�mero de ejericio: 18

Problema planteado:  Programa que declare un vector de diez elementos enteros y pida
n�meros para rellenarlo  hasta que se llene el vector o se introduzca un n�mero negativo.
Entonces se debe imprimir el  vector (s�lo los elementos introducidos).
*/
#include <iostream>

using namespace std;

int main (){
    int vector1[10];
    int contador = 0, i, aux;
    for (i=0; i<10 ; i++){
    cout << "Ingresa un numero por favor: ";
    cin >> aux;
    if (aux>0){
       vector1[i] = aux;
       contador++;
    }
    else if (aux <0)
        break;
    }
    cout << endl;
    cout << "El vector es: "<< endl;
    for (i=0 ; i < contador ; i++){
    cout << vector1[i]<<endl;
    }
    return 0;
}
