/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 30/08/2023

Fecha modificaci�n: 30/08/2023

N�mero de ejericio: 7

Problema planteado: A partir de dos vectores constantes que contienen nombres de 7
personas cada uno.  Escribir un programa que escriba la palabra �Iguales� si ambos vectores
son iguales y  �Diferentes� si no lo son. Ser�n iguales cuando en la misma posici�n de
ambos vectores se  tenga el mismo valor para todos los elementos.
*/
#include <iostream>
#include <stdio.h>

 using namespace std;

 int main(){
    string cadena1 [] = {"Carlos", "Micaela", "Mario", "Jose", "Antonia", "Daniela", "Estrella"};
    string cadena2 [] = {"Carlos", "Micaela", "Maria", "Jose", "Antonia", "Daniela", "Estrella"};
    int i;
    cout << "Las cadenas son: "<< endl;
    cout << "Cadena uno: "<<endl;
    for (i=0;i<7; i++){
    cout << cadena1[i]<<endl;
    }
    cout << "Cadena dos: "<<endl;
    for (i=0;i<7; i++){
    cout << cadena2[i]<<endl;
    }

    if ( cadena1.compare(cadena2) == 0){
    cout << "Las cadenas son iguales." << endl;
    }
    else
        cout << "Las cadenas son distintas. "<<endl;
    return 0;
 }
