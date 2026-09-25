/*
 *
 * Proyecto guardar videojuegos
 * Narayana Rajaram López
 * A01714315
 * 04/06/2026
 * Version : 3
 * Esta clase define objeto de tipo Usuario que contiene el nombre del 
 * usuario, una lista de juegos favoritos y una biblioteca de juegos
 * Vector videojuegos
 */

#ifndef USUARIO_H
#define USUARIO_H

#include <vector>

#include "Biblioteca.h"

using namespace std;

class Usuario {

//Declarar las variables privadas de instancia
private:

    string nombre;

    vector<string> favoritos;

    Biblioteca biblioteca;

//Declarar constructor por default y metodos públicos.
public:

    Usuario();

    Usuario(string nom);

    void agregarFavorito(
        string juego
    );

    void mostrarFavoritos();

    Biblioteca& getBiblioteca();
};

/**
 * Constructor por defecto.
 */
Usuario::Usuario() {

    nombre = "";
}

/**
 * Constructor con parámetro.
 *
 * @param nom nombre del usuario
 */
Usuario::Usuario(string nom) {

    nombre = nom;
}

/**
 * agregarFavorito agrega un videojuego a favoritos.
 * 
 * Guarda el nombre del juego en el vector de favoritos.
 *
 * @param juego nombre del videojuego
 */
void Usuario::agregarFavorito(
    string juego) {

    favoritos.push_back(juego);
}

/**
 * mostrarFavoritos muestra los juegos favoritos del usuario.
 * 
 * Utiliza favoritos[i] para acceder a cada elemento del vector, 
 * recorre este y va imprimiendo cada uno de los juegos favoritos, 
 * si el vector esta vacio, se imprime un mensaje indicando que 
 * no hay favoritos.
 * 
 * @param
 * @return
 */
void Usuario::mostrarFavoritos() {

    cout << "\n FAVORITOS "
         << endl;

    if (favoritos.size() == 0) {

        cout << "No hay favoritos."
             << endl;

        return;
    }

    for (int i = 0;
         i < favoritos.size();
         i++) {

        cout << favoritos[i]
             << endl;
    }
}

/**
 * getBiblioteca regresa una referencia a la biblioteca del usuario.
 * 
 * @return referencia a biblioteca
 */
Biblioteca& Usuario::getBiblioteca() {

    return biblioteca;
}

#endif