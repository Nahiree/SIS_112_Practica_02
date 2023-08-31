/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 31/08/2023

Fecha modificación: 31/08/2023

Número de ejericio: 14

Problema planteado:  Un arreglo contiene números al azar entre N y M, crear un segundo
arreglo que contenga  los números capicúa contenidos en el primero.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    int n, m, numero, reversa=0, copia, i;
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
    for (i=0 ; i<=numero ;i++){
    copia= arreglo1[i];
    while (copia !=0){
    reversa= reversa*10+ copia%10;
    copia = copia%10;
    }
    cout << reversa;
    }
    return 0;
}
