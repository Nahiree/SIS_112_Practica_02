/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 31/08/2023

Fecha modificaci�n: 31/08/2023

N�mero de ejericio: 20

Problema planteado:  Crea un programa que pida un n�mero al usuario un n�mero de mes
(por ejemplo, el 4) y  diga cu�ntos d�as tiene (por ejemplo, 30) y el nombre del mes. Debes
usar un vector. Para  simplificarlo vamos a suponer que febrero tiene 28 d�as.
*/

#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector<string> datos = {"1", "Enero" ,"31","2", "Febrero" ,"28","3", "Marzo" ,"31",
    "4", "Abril" ,"30","5", "Mayo" ,"31","6", "Junio" ,"30",
    "7", "Julio" ,"31","8", "Agosto" ,"31","9", "Septiembre" ,"30","10",
    "Octubre" ,"31","11", "Noviembre" ,"30","12", "Diciembre" ,"31"};
    string numero;
    int i;
    cout << "Ingresa el numero de algun mes: ";
    cin >> numero;
    for(i=0; i<36; i=i+3){
    if (numero == datos[i]){
    cout << "Numero de mes: "<<numero<< endl;
    cout << "Mes: "<< datos[i+1]<< endl;
    cout << "Dias: "<< datos[i+2]<< endl;
    }
    }
    return 0;
}
