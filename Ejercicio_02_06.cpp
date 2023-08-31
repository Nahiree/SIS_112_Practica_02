/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 29/08/2023

Fecha modificación: 31/08/2023

Número de ejericio: 6

Problema planteado:  Dados dos arreglos constantes de igual tamaño, generar un tercer
arreglo con los elementos  intercalados.
*/
#include <iostream>
using namespace std;
int main(){
    int arreglo1[]={11,12,13,14,15,16,17,18,19,20};
    int arreglo2[]= {30,29,28,27,26,25,24,23,22,21};
    int arreglo3 [20];
    int i;
    cout << "Los vectores son: "<< endl;
    for  (i = 0; i < 10 ; i++){
    cout << arreglo1[i]<< ", ";
    }
    cout << endl;
    for  (i = 0; i < 10 ; i++){
    cout << arreglo2[i]<< ", ";
    }
    cout <<endl;
    for (i=0; i <10; i++){
    arreglo3[i*2]=arreglo1[i];
    }
    for (i=0; i <10; i++){
    arreglo3[(i*2)+1]=arreglo2[i];
    }
    cout << "la combinacion de ambos vectores es: "<< endl;
    for (i=0; i <20; i++){
    cout << arreglo3[i]<<", ";
    }

    return 0;
}
