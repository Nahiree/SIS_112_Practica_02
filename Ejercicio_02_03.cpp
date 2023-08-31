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
    int arreglo[49];
    int rango_a , rango_b, i, j,contador = 0, contador2 = 0;
    srand((unsigned)time(0));
    cout << "Ingresa al rango de numeros: ";
    cin >> rango_a >> rango_b;
    for ( i= 0 ; i <50 ; i++){
    arreglo[i]= rango_a+(rand()%(rango_b+1-rango_a));
    }
    cout << "El vector es: "<< endl;
    for ( i = 0 ; i < 50 ; i++){
    cout <<arreglo[i]<<endl;
    }
    for ( i = 0 ; i < 50 ; i++){
    contador = 0;
    for  (j=1; j<=arreglo[i] ; j++){
    if (arreglo[i] % j == 0){
        contador++;
    }
    }
    if (contador == 2){
        contador2++;
    }
    }
    cout << "La cantidad de numeros primos es: "<< contador2 << endl;
    return 0;
}
