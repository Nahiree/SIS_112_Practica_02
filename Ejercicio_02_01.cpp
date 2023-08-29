/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 28/08/2023

Fecha modificaci�n: 28/08/2023

N�mero de ejericio: 1

Problema planteado: Almacenar un vector de tama�o N, con n�meros al azar entre A y B, e
imprima la suma de  los componentes de �ndice par y la resta de los componentes de �ndice
impar.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    int rango_a,rango_b, cant_num, i, sumador = 0, sustractor= 0;
    srand((unsigned)time(0));
    cout << "Ingresa la cantidad de numeros aleatorios: ";
    cin >> cant_num;
    int numero [cant_num];                                         // Recien a;ado el vector para saber cuantos numero se ingresaran.
    cout << "Ingresa el rango: ";
    cin >> rango_a >> rango_b;
    for (i=0; i<cant_num ; i++){
    numero[i]= (rango_a+(rand()%(rango_b+1-rango_a)));// Ciclo for para asignarle una posicion a cada numero genrado.
    }
    cout << "El vector es: "<< endl;
    for (i = 0; i < cant_num ; i++){
    cout << numero[i]<< ", ";
    if ( numero[i]%2==0){
    sumador = sumador+ numero[i];
    }
    else
        sustractor = sustractor-numero[i];
    }
    cout << "\nLa suma de sus componentes pares es: " << sumador << endl;
    cout << "La resta de sus componentes impares es: " << sustractor << endl;
    return 0;
}
