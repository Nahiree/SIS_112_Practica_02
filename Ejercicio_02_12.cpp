/*
Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 31/08/2023

Fecha modificaci�n: 31/08/2023

N�mero de ejericio: 12

Problema planteado: 12.- Un arreglo constante contiene la producci�n en toneladas m�tricas
de 6 minerales, y otro  contiene los nombres de estos minerales, para obtener:
 Buscar por nombre de mineral y desplegar la producci�n
- Ordenar del mayor al menor (producci�n) y mostrar:
Mineral Produccion �
SN 998.000
SB 876.500
AU 786.670
PT 636.143
AG 135.567
CU 109.412

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
    int toneladas []= {998000, 876500, 786670, 6363143, 135567,109412};
    vector <string>elementos = {"SN", "SB","AU", "PT", "AG", "CU"};
    string elemento;
    int i,mayor=0, menor = 1000000, j, k;
    cout << "Ingrese el elemento a buscar (todo con mayusculas): ";
    cin>> elemento;
    for (i=0; i<7 ; i++){
    if (elemento == elementos[i]){
    cout << "Elemento: "<< elementos[i]<< endl;
    cout << "Toneladas: " << toneladas[i];
    }
    }
    cout << "Ordenado del mayor al menor es: "<< endl;
    for (i=0; i<7 ; i++){
        cout << elementos[i] << " : "<< toneladas[i]<< endl;
    }
    return 0;
}
