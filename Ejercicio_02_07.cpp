/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 30/08/2023

Fecha modificación: 31/08/2023

Número de ejericio: 7

Problema planteado: A partir de dos vectores constantes que contienen nombres de 7
personas cada uno.  Escribir un programa que escriba la palabra “Iguales” si ambos vectores
son iguales y  “Diferentes” si no lo son. Serán iguales cuando en la misma posición de
ambos vectores se  tenga el mismo valor para todos los elementos.
*/
#include <iostream>
#include <vector>
#include <string>
 using namespace std;

 int main(){
    vector<string> cadena1 = {"Carlos", "Micaela", "Mario", "Jose", "Antonia", "Daniela", "Estrella"};
    vector<string> cadena2 = {"Carlos", "Micaela", "Maria", "Jose", "Antonia", "Daniela", "Estrella"};
    int i, contador;
    cout << "Las cadenas son: "<< endl;
    cout << "Cadena uno: "<<endl;
    for (i=0;i<7; i++){
    cout << cadena1[i]<<endl;
    }
    cout << "Cadena dos: "<<endl;
    for (i=0;i<7; i++){
    cout << cadena2[i]<<endl;
    }
    for (i=0; i <7 ; i++){
    if ( cadena1[i]==cadena2[i]){
    contador++;
    }
    }
    cout << endl;
    if (contador != 7)
        cout << "Distintos. "<<endl;
    else
        cout << "Iguales."<<endl;
    return 0;
 }
