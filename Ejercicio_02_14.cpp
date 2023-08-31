/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 31/08/2023

Fecha modificaci�n: 31/08/2023

N�mero de ejericio: 14

Problema planteado:  Un arreglo contiene n�meros al azar entre N y M, crear un segundo
arreglo que contenga  los n�meros capic�a contenidos en el primero.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    int n, m, numero, reversa=0, copia, i,j=0;
    srand((unsigned)time(0));
    cout << "Ingresa la cantidad de elementos que tendra el arreglo: ";
    cin >> numero;
    int arreglo1[numero], arreglo2[numero];
    cout << "Ingrese el rango: ";
    cin >> n>> m;
    for (i=0; i< numero ; i++){
    arreglo1[i]= (n+(rand()%(m+1-n)));
    }
    for (i=0; i<numero ; i++){
    cout << arreglo1[i] << endl;
    }
    cout << endl;
    for (i=0 ; i<numero ;i++){
    copia = arreglo1[i];
    reversa=0;
    while (copia > 0){
    reversa = reversa * 10 + copia%10;
    copia = copia/10;
    }
    if (arreglo1[i]==reversa){
        arreglo2[j]=arreglo1[i];
        j++;
    }
    }
    cout << "Los elementos capicua son: "<<endl;
    for (i=0; i< j ; i++){
    cout << arreglo2[i]<< endl;
    }
    return 0;
}
