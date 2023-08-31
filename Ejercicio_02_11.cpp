/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 31/08/2023

Fecha modificación: 31/08/2023

Número de ejericio: 11

Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar
un -1) y a partir de  este arreglo determine la desviación típica.
*/

#include <iostream>

using namespace std;

int main (){
    int edades[50], i=-1, sumador =  0 ,contador=0, j, aux, sumador2 = 0;
    float media, desviacion=0;
    do {
    i++;
    cout << "Ingresa la edad: ";
    cin >> edades[i];
    }
    while (edades[i]>=0);
    for (j=0 ; j < i; j++){
    sumador = sumador + edades[j];
    }
    media = float(sumador) / float(i);
    cout << media;
    for (j=0; j<i ; j++){
    aux =(edades[j]-media);
    if (aux < 0){
        aux = aux *(-1);
    }
    sumador2 = sumador2 + aux;
    }
    cout << "La desviacion tipica es: "<< sumador2/i << endl;
    return 0;
}
