/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 28/08/2023

Fecha modificación: 28/08/2023

Número de ejericio: 2

Problema planteado: Escribir un programa que a partir de un arreglo constante de 10
elementos enteros,  determine el porcentaje de números pares positivos e impares negativos.
*/

#include <iostream>

using namespace std;

int main (){
    int arreglo [] = {23, 45, 67, 89, 13, 4, 32, 50, 98, 73};
    int contador = 0, i;
    float positivos, negativos;
    cout << "los numeros del vector son : " << endl;
    for ( i=0; i<10 ; i++){
    cout << arreglo [i] <<endl;
    if (arreglo [i]%2==0){
    contador = contador + 1;
    }
    else
        contador = contador;
    }
    positivos = ((float(contador) / 10)*100);
    negativos = ((((10 - (float(contador)))/ 10)*100));
    cout <<"\nEl porcentaje de numeros positivos es: " << positivos << " %." <<endl;
    cout << "El porcentaje de numeros negativos es: " << negativos << " %." << endl;
    return 0;
}
