/*
Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 28/08/2023

Fecha modificación: 29/08/2023

Número de ejericio: 4

Problema planteado:  Un arreglo contiene las edades de un grupo de 50 personas con números
al azar, determine:  el porcentaje de mayores (>=18 años) y menores de edad (<18 años).
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    int edad[50];
    srand((unsigned)time(0));
    int i, contador_ma=0, contador_me=0;
    float p_mayores, p_menores;
    for ( i=0; i<50; i++){
    edad[i] = 1+(rand()%(1+1-110));
    }
    for ( i=0; i<50; i++){
    cout << edad[i] << endl;
    if (edad[i]>=18)
        contador_ma++;
    else if (edad[i]<18)
        contador_me++;
    }
    p_mayores = ((float (contador_ma)*100))/50;
    p_menores = ((float(contador_me)*100))/50;
    cout << "El porcentaje de personas mayores es de: "<< p_mayores << " %. "<<endl;
    cout << "El porcentaje de personas menores es de: "<< p_menores<< " %. "<<endl;
    return 0;
}
