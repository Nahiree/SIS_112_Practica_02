/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 31/08/2023

Fecha modificaci�n: 31/08/2023

N�mero de ejericio: 15

Problema planteado:  Realizar un programa que defina un vector de 10 enteros, a continuaci�n
lo inicialice con  valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla
cada elemento del vector  junto con su cuadrado y su cubo.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main (){
    int vector[10], i;
    for (i=0 ; i<10 ;i++){
    vector[i]= (1+(rand()%(10+1-1)));
    }
    for (i=0 ; i<10 ; i++){
    cout << "El numero es: "<< vector[i]<< endl;
    cout << "Cuadrado: "<< pow(vector[i],2)<< endl;
    cout << "Cubo: "<< pow(vector[i],3)<< endl;
    cout << endl;
    }
    return 0;
}
