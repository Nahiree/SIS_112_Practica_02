/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 30/08/2023

Fecha modificaci�n: 30/08/2023

N�mero de ejericio: 16

Problema planteado:  Crear un vector de 5 elementos de cadenas de caracteres, inicializa
el vector con datos  le�dos por el teclado. Copia los elementos del vector en otro vector
pero en orden inverso, y  mu�stralo por la pantalla.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main (){
    char vector1[5], vector2[6];int i;
    for (i=0 ; i<5 ; i++){
    cout << "Ingresa un caracter: ";
    cin >> vector1[i];
    }
    strcpy(vector2,vector1);
    strrev (vector2);
    for (i=1 ; i<6 ; i++){;
    cout << vector2[i]<<endl;
    }
    return 0;
}
