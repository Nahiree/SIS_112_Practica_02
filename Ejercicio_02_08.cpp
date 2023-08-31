/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 30/08/2023

Fecha modificaci�n: 30/08/2023

N�mero de ejericio: 8

Problema planteado: Se tiene el arreglo
Ventas:
0 1 2 10 11
vene vfeb vmar . . vnov vdic
Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que  contiene
los nombres de los meses:
Meses:
0 1 2 10 11
�Ene� �Feb� �Mar� . . �Nov� �Dic�
Escriba un programa que obtenga:
� �En qu� mes(es) se dieron las ventas m�ximas de la empresa?
� �A cu�nto ascendieron las ventas m�ximas?
� �Cu�l fue el total de las ventas?
Las ventas deben ser ingresadas por teclado.
*/

#include <iostream>

#include<string.h>

using namespace std;

int main (){
    string meses[] = {"Ene","Feb","Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct" ,"Nov", "Dic","\0"};
    int ventas[12];
    int i, j, mayor = 0, total=0;
    for (i=0; i<12; i++){
    cout << "Ingrese un el numero de ventas de: "<< meses[i]<<endl;
    cin >> ventas[i];
    }
    for (i=0; i<12; i++){
    if (ventas[i] > mayor){
    mayor = ventas[i];
    j=i;
    }
    total=total + ventas[i];
    }
    cout << "El mayor mes de venta fue: "<< meses[j]<<endl;
    cout << "Con un ascenso de: " << mayor <<endl;
    cout << "El total evndido fue: "<<total<<endl;
    return 0;
}
