/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 30/08/2023

Fecha modificaci�n: 30/08/2023

N�mero de ejericio: 24

Problema planteado:  Leer una cadena en may�sculas y c�mbielas en min�scula.
*/

#include <iostream>

using namespace std;

int main (){
    int cant_carc, i;
    cout << "Ingresa el numero de elementos de la cadena: ";
    cin >> cant_carc;
    char cadena1[cant_carc], cadena2[cant_carc];
    for (i=0 ; i < cant_carc ; i++){
    cout << "Ingresa el primer elemento de la cadena: ";
    cin >> cadena1[i];
    }
    for (i=0 ; i < cant_carc ; i++){
    cadena2[i] = cadena1[i] + 32;
    }
    cout << "La nueva cadena es: " << endl;
    for (i=0 ; i < cant_carc ; i++){
    cout << cadena2[i]<< endl;
    }
    return 0;
}

