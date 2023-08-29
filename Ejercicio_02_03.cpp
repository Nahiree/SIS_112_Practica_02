/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 28/08/2023

Fecha modificación: 28/08/2023

Número de ejericio: 3

Problema planteado:  Escribir un programa que genere un arreglo de 50 posiciones con números
al azar en el  rango de A - B y determine cuántos de estos elementos son números primos.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    int arreglo[20];
    int rango_a , rango_b, i, j,contador, contador2 = 0;
    srand((unsigned)time(0));
    cout << "Ingresa al rango de numeros: ";
    cin >> rango_a >> rango_b;
    for ( i= 0 ; i <19 ; i++){
    arreglo[i]= rango_a+(rand()%(rango_b+1-rango_a));
    }
    for ( i = 0 ; i < 19 ; i++){
    cout <<arreglo[i]<<endl;
    contador=0;
    for (j=2; j<=arreglo[i]; j++){
    if (arreglo[i]% j == 0)
        contador++;
    else
        contador = contador;
    }

    contador2 = contador2+contador;
    }
        cout << contador<<endl;
    cout << "La cantidad de numeros primos que hay es: " << contador2<<endl;
    return 0;
}
