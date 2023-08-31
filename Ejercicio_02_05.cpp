/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 30/08/2023

Fecha modificación: 30/08/2023

Número de ejericio: 5

Problema planteado: - Un arreglo contiene las estaturas en cm de N personas (estatura al
azar en un rango de 50 a 240), determinar la mayor estatura, la estatura más baja y el
promedio de estaturas
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    int num_personas, mayor = 49, menor=241, sumador = 0, i;
    float promedio;
    cout << "Ingresa el numero de personas: ";
    cin >> num_personas;
    int altura[num_personas];
    cout << "Las alturas en cm son:  " << endl;
    for(i=0 ; i<num_personas ; i++){
    altura[i] = 50+ (rand()%(240+1-50));
    }
    for(i=0 ; i<num_personas; i++){
    cout << altura[i] << endl;
    }
    for(i=0 ; i<num_personas; i++){
    sumador = sumador + altura[i];
    if (altura[i] > mayor){
    mayor = altura[i];
    }
    if (altura[i]< menor){
    menor = altura[i];
    }
    }
    promedio = float(sumador)/float(num_personas);
    cout << "La mayor altura es: "<< mayor << endl;
    cout << "La menor estatura es: "<< menor<<endl;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
