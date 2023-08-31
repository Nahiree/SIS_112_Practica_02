/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 30/08/2023

Fecha modificación: 30/08/2023

Número de ejericio: 9

Problema planteado:  Un arreglo contiene las calificaciones de un examen dado por un grupo
de estudiantes, otro  arreglo contiene los nombres de los mismos y un tercer arreglo
contiene la sigla de la carrera.  Escribir un programa que permita obtener el nombre del
alumno que obtuvo la mayor y el  nombre del alumno que obtuvo la nota menor, además mostrar
que carrera tuvo un  desempeño mayor con relación al promedio del curso.
*/

#include <iostream>

using namespace std;
int main (){
    int calificaciones[7] = {95, 97, 100, 56, 78, 30, 87};
    string nombre [7] = {"Natalia Hernandes", "Carolina Burgoa", "Alexia Jimenez", "Pedro Rosales", "Javier Molino", "Rosa Martinez", "Dilan Amarillo"};
    string carrera [7] = {"ADM", "DER", "DIG", "SIS", "CONT", "ARQ", "MAT"};
    int i, mayor=0, menor=100, mejor_c, aux1, aux2;
    for (i=0 ; i<7 ; i++){
    if(calificaciones[i] > mayor){
    mayor = calificaciones[i];
    aux1=i;
    }
    if(calificaciones[i] < menor){
    menor = calificaciones[i];
    aux2=i;
    }}
    cout << "La persona que obtuvo la mayor nota fue: "<< nombre[aux1]<<endl;
    cout << "La persona que obtuvo la menor nota fue: "<< nombre[aux2]<<endl;
    cout << "La carrera que mas destaco fue: "<< carrera[aux1];
    return 0;
}
