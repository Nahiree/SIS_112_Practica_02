/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 30/08/2023

Fecha modificación: 30/08/2023

Número de ejericio: 17

Problema planteado:  Se quiere realizar un programa que lea por teclado las 5 notas
obtenidas por un alumno  (comprendidas entre 0 y 100). A continuación, debe mostrar
todas las notas, la nota media, la  nota más alta que ha sacado y la menor.
*/

#include <iostream>

using namespace std;

int main (){
    int vector1[5];
    int i, mayor=0, menor=100, sumatoria = 0;
    float media;
    for (i=0 ; i<5 ; i++){
    cout << "Ingresa la nota del alumno: ";
    cin >> vector1[i];
    }
    cout << "Las notas son: "<< endl;
    for  (i=0 ; i <5 ; i++){
    cout << vector1[i]<< endl;
    if (vector1[i]> mayor)
        mayor = vector1[i];
    if (vector1[i]< menor)
        menor = vector1[i];
    sumatoria= sumatoria +vector1[i];
    }
    media = float(sumatoria) / 5;
    cout << "El mayor es: "<< mayor << endl;
    cout << "El menor es: "<< menor << endl;
    cout << "La media es: " << media<<endl;
    return 0;
}
