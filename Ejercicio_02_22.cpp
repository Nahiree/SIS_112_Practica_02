/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 30/08/2023

Fecha modificación: 30/08/2023

Número de ejercicio: 22

Problema planteado:  Leer 2 vectores de dimensión N y calcule la multiplicación de los
mismos en otro vector.
*/

#include <iostream>

using namespace std;

int main (){
    int numero, i;
    cout << "Ingresa la cantidad de numeros: ";
    cin >> numero;
    int vector1[numero], vector2[numero], vector3[numero];
    for(i=0 ; i < numero ; i++){
    cout << "Ingrese un numero para el vector uno: ";
    cin >> vector1[i];
    }
    cout <<endl;
    for(i=0 ; i < numero ; i++){
    cout << "Ingrese un numero para el vector dos: ";
    cin >> vector2[i];
    }
    cout <<endl;
    cout << "La multiplicacione de los vectores es: " << endl;
    for(i=0 ; i < numero ; i++){
    vector3[i]= vector1[i]*vector2[i];
    cout << vector3[i]<< endl;
    }

    return 0;
}
