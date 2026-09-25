/*
 *
 * Proyecto guardar videojuegos
 * Narayana Rajaram López
 * A01714315
 * 24/09/2029
 * Version : 3
 * Esta clase ordena un vector de punteros a Videojuego de forma
 * ascendente por su calificacion, usa bubble sort para ordenarlos.
 */

#ifndef ORDENADORJUEGOS_H
#define ORDENADORJUEGOS_H

#include <vector>

#include "Videojuego.h"

using namespace std;

//Declarar objeto JuegoAccion que hereda de Videojuego
class OrdenadorJuegos {

//Declarar metodos públicos
public:

    void ordenarPorCalificacion(
        vector<Videojuego*> &juegos
    );
};

/**
 * ordenarPorCalificacion ordena el vector de juegos
 * de menor a mayor calificacion usando bubble sort.
 *
 * @param juegos vector de punteros a Videojuego que se va a ordenar
 * 
 * En el caso de la complejidad temporal, el peor caso y el promedio es O(n^2) cuando el vector esta
 * desordenado ya que son ciclos anidados, el mejor caso es O(n) cuando el vector ya esta ordenado
 * En complejidad espacial es O(1) porque no se crean estrutcras adicionales
 */
void OrdenadorJuegos::ordenarPorCalificacion(
    vector<Videojuego*> &juegos) {

    int n = juegos.size();                            // O(1), solo se guarda el tamaño del vector

    for (int i = 0; i < n - 1; i++) {                 // O(n), ya que se puede ejecutar mas de una vez

        bool huboIntercambio = false;                 // O(1), solo asigna una variable

        for (int j = 0; j < n - 1 - i; j++) {         // O(n), ya que recorre el vector mas de una vez para ordenar y va disminuyendo en cada pasada

            if (juegos[j]->getCalificacion() >
                juegos[j + 1]->getCalificacion()) {   // O(1), compara calificaciones pero son elementos ya guardados

                Videojuego* temp = juegos[j];         // O(1), solo guarda puntero a vector
                juegos[j] = juegos[j + 1];            // O(1), solo asigna puntero a vector
                juegos[j + 1] = temp;                 // O(1), solo asigna puntero a vector

                huboIntercambio = true;               // O(1), solo asigna variable
            }
        }

        if (!huboIntercambio) {                       // O(1), revisamos si hubo intercambio
            break;
        }
    }
}

#endif