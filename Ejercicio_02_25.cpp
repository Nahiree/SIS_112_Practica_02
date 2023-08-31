/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 30/08/2023

Fecha modificación: 30/08/2023

Número de ejericio: 25

Problema planteado:  Genere un vector de N elementos y llénelos aleatoriamente entre
valores de 1 a 100 e  indique el mayor elemento, el menor elemento y el promedio.
*/

#include <iostream>

using namespace std;

int main (){
    int mayor = 0, menor = 101, sumatoria = 0, cant_num, i;
    float promedio;
    cout <<"Ingresa la cantidad de numeros: ";
    cin >> cant_num;
    int vector[cant_num];
    for (i=0 ; i < cant_num; i++){
    vector[i]= (1+(rand()%(100+1-1)));
    }
    for (i=0 ; i<cant_num; i++){
    cout << vector[i] << endl;
    if (vector[i]>mayor){
    mayor = vector[i];
    }
    if (vector[i] < menor){
    menor = vector[i];
    }
    sumatoria = sumatoria + vector[i];
    }
    promedio =  (float(sumatoria) / float(cant_num));
    cout << "El mayor elemento es: "<< mayor << endl;
    cout << "El menor elemento es: "<< menor << endl;
    cout << "El promedio es: "<<promedio <<  endl;
    return 0 ;
}
