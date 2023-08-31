/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 30/08/2023

Fecha modificación: 30/08/2023

Número de ejercicio: 23

Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector.
*/

#include <iostream>

using namespace std;

int main (){
    int numero, i, k;
    cout << "Ingresa el numero de elementos: ";
    cin >> numero;
    int vector1[numero], vector2[numero];
    k = numero*2;
    int vector3[k];
    for (i=0 ; i < numero ; i++){
    cout << "Ingresa un elemento para el vector uno: ";
    cin >> vector1[i];
    }
    cout << endl;
    for (i=0 ; i < numero ; i++){
    cout << "Ingresa un elemento para el vector dos: ";
    cin >> vector2[i];
    }
    for (i=0 ; i < numero ; i++){
    vector3[i] = vector1[i];
    }
    for (i=(numero) ; i < (numero*2) ; i++){
    vector3[i] = vector2[i-numero];
    }
    for (i=0 ; i < k ; i++){
    cout << vector3[i] <<endl;
    }
    return 0;
}
