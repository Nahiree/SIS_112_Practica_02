/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 31/08/2023

Fecha modificaci�n: 31/08/2023

N�mero de ejericio: 13

Problema planteado: Almacenar en un arreglo los n primeros n�meros primos.
*/

#include <iostream>

using namespace std;

int main (){
    int numero, i, j, contador=0, c=0;
    int arreglo[50];
    cout << "Hasta que numero desea el arreglo?: ";
    cin >> numero;
    for  (i=1 ; i<=numero ; i++){
    contador = 0;
    for (j=1 ; j<=i; j++){
    if (i%j==0){
    contador++;
    }
    }
    if (contador == 2){
    arreglo [c]=i;
    c++;
    }
    }
    for (i=0;i<c;i++){
    cout << arreglo[i]<<endl;
    }
    return 0;
}
