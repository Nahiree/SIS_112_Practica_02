/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 31/08/2023

Fecha modificaci�n: 31/08/2023

N�mero de ejericio: 21

Problema planteado:  Dado un arreglo que contiene la poblaci�n de los nueve departamentos
del pa�s y otro que  contiene los nombres de estos departamentos, indique el nombre del
departamento que tiene  la mayor poblaci�n y el nombre del departamento que tiene la menor
poblaci�n.
*/

#include <iostream>

using namespace std;

int main (){
    string departamentos [] = {"La Paz", "Santa Cruz", "Cochabamba", "Chuquisaca", "Tarija", "Oruro", "Potosi", "Pando", "Beni"};
    float poblacion[] = {3039000, 3729000, 2174000, 665000, 633000, 585000, 938000, 180000, 510000};
    int mayor = 0, menor= 4000000;
    int i, j, k;
    for (i=0; i <9 ; i++){
    if (poblacion[i]> mayor){
    mayor = poblacion[i];
    j=i;
    }
    if (poblacion[i]< menor){
    menor = poblacion[i];
    k=i;
    }
    }
    cout << "El departamento que tiene mayor poblacion es: "<< departamentos[j]<<endl;
    cout << "El departamento que tiene menor poblacion es: "<< departamentos[k]<<endl;
    return 0;
}
