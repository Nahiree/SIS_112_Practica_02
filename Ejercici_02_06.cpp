/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 29/08/2023

Fecha modificaci�n: 29/08/2023

N�mero de ejericio: 6

Problema planteado:  Dados dos arreglos constantes de igual tama�o, generar un tercer
arreglo con los elementos  intercalados.
*/
#include <iostream>
using namespace std;
int main(){
    int arreglo1[]={11,12,13,14,15,16,17,18,19,20};
    int arreglo2[]= {30,29,28,27,26,25,24,23,22,21};
    int arreglo3 [20];
    int i;
    for  (i = 0; i < 10 ; i++){
    cout << arreglo1[i]<< ", ";
    }
    cout << endl;
    for  (i = 0; i < 9 ; i++){
    cout << arreglo2[i]<< ", ";
    }
    for (i = 0 ; i<20; i+2){
    arreglo3[i]=arreglo1[i*2];
    }
    for (i = 1 ; i<10; i++){
    arreglo3[(i*2)-1]=arreglo2[i];
    }
    for (i=0 ; i<20 ; i++){
    cout << arreglo3[i]<<endl;
    }
    return 0;
}
