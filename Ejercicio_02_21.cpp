/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 30/08/2023

Fecha modificación: 31/08/2023

Número de ejericio: 21

Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’
de cinco enteros cada  uno, pida valores para ‘vector1’ y ‘vector2’ y calcule
vector3=vector1+vector2.
*/

#include <iostream>

using namespace std;

 int main (){
     const int entero=5;
    int vector1[entero], vector2[entero], vector3[entero];
    int i;
    for  (i=0 ; i<entero; i++){
    cout << "Ingresa un numero para vector 1: ";
    cin >> vector1[i];
    }
    cout << endl;
    for  (i=0 ; i<entero ; i++){
    cout << "Ingresa un numero para vector 2: ";
    cin >> vector2[i];
    }
    for  (i=0 ; i<entero ; i++){
    vector3[i] =  vector1[i] + vector2[i];
    }
    cout << "El vector resultado es: " << endl;
    for  (i=0 ; i<entero ; i++){
    cout << vector3[i]<< endl;
    }

    return 0;
 }
