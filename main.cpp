#include <iostream>
#include <string>

using namespace std;

int main() {

    // se declara el arreglo con los datos a ordenar
    int datos[10] = {5,78,95,13,20,23,96,54,26,34};

    // se encuentra el tamano del arreglo
    int tamano  = sizeof(datos)/sizeof(datos[0]);

    int contador = 0;

    // se ejecuta el ordenamiento de la burbuja
    // se ejecuta n-1 veces porque en la ultima iteracion no se necesita comparar el ultimo valor
    for (int i = 1; i < tamano; i++){
        // se de nuevo n-1 veces por la misma rason
        for (int j = 0; j < tamano - 1; j++) {
            contador++;
            if (datos[j] > datos[j+1]){
                // si j es menor a j+1, entonces se intercambian valores, llevando al mayor hacia la derecha
                int respaldo = datos[j];
                datos[j] = datos[j+1];
                datos[j+1] = respaldo;
            }
        }
    }

    // se imprime el arreglo ordenado
    for (int i = 0; i < tamano; i++) {
        cout << datos[i]<< endl;
    }
    cout<<contador<<endl;

    /*
     La complejidad del algoritmo es n-1 * n-1 = O(n-1)^2
     Esto puesto que en ambos ciclos en la ultima iteracion no se compara el ultimo elemento del arreglo pues para ese
     entonces el ultimo elemento ya esta ordenado, por eso se intera n-1 veces, y al repetirse dos veces el mismo ciclo
     la complejidad del algoritmo se vuelve (n-1)^2
     */
}
