/*
 *
 * Proyecto guardar videojuegos
 * Narayana Rajaram López
 * A01714315
 * 04/06/2026
 * Version : 3
 * Esta clase almacena videojuegos de distintos tipos en un vector de punteros a videojuegos, 
 * esto es para poder usar el polimorfismo en tiempo de ejecucion y guardar objetos de las 
 * clases hijas (JuegoAccion, JuegoRPG y JuegoAventuraGrafica) en un vector de la clase padre 
 * (Videojuego), esta clase es utilizada por la función principal del programa y es parte del 
 * proyecto GuardarVideojuegos.
 * 
 */

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>

#include "Videojuego.h"
#include "ordenar.h"

using namespace std;

class Biblioteca {

//Declarar las variables privadas de instancia
private:

    vector<Videojuego*> juegos;

//Declarar constructor por default y metodos públicos.
public:

    Biblioteca();

    void agregarJuego(
        Videojuego* juego
    );

    void mostrarJuegos();

    void buscarJuego(
        string nombreBuscado
    );

};

/**
 * Constructor.
 */
Biblioteca::Biblioteca() {

}

/**
 * agregarJuego agrega un videojuego a la biblioteca.
 * 
 * Agrega el puntero al videojuego al vector de juegos.
 *
 * @param juego apuntador al videojuego
 */
void Biblioteca::agregarJuego(
    Videojuego* juego) {

    juegos.push_back(juego);
}

/**
 * mostrarJuegos muestra la información de todos los videojuegos
 * 
 * Utiliza juegos[i] para acceder a cada elemento del vector, 
 * recorre el vector juegos y accede a cada elemento almacenado.
 * Cada posicion del vector contiene un apuntador a un objeto Videojuego.
 * 
 * Por medio del metodo mostrarInfo() se muestrala informacion de 
 * cada videojuego.
 */
void Biblioteca::mostrarJuegos() {

    OrdenadorJuegos ordenador;

    ordenador.ordenarPorCalificacion(juegos);

    cout << "\n VIDEOJUEGOS "
         << endl;

    if (juegos.size() == 0) {

        cout << "No hay juegos registrados."
             << endl;

        return;
    }

    for (int i = 0;
         i < juegos.size();
         i++) {

        juegos[i]->mostrarInfo();
    }
}

/**
 * buscarJuego busca un videojuego por nombre.
 *
 * Recorre el vector juegos[i] y compara el nombre de cada videojuego 
 * con el nombre recibido. Si encuentra una coincidencia, muestra 
 * la informacion del juego.
 * 
 * @param nombreBuscado nombre a buscar
 */
void Biblioteca::buscarJuego(
    string nombreBuscado) {

    bool encontrado = false;

    for (int i = 0;
         i < juegos.size();
         i++) {

        if (juegos[i]->getNombre()
            == nombreBuscado) {

            juegos[i]->mostrarInfo();

            encontrado = true;
        }
    }

    if (!encontrado) {

        cout << "\nJuego no encontrado."
             << endl;
    }
}

#endif