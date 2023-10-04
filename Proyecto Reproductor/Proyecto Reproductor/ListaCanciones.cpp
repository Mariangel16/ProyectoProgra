#include "ListaCanciones.h"

Cancion::Cancion(std::string nombre, std::string artista, int duracion) : nombre(nombre), artista(artista), duracion(duracion) {}

CD::CD(std::string nombre) : nombre(nombre), siguiente(nullptr), canciones(nullptr), numCanciones(0) {}

void CD::agregarCancion(Cancion cancion) {
    // agregar una canción al CD
}

ListaCanciones::ListaCanciones() : primero(nullptr), ultimo(nullptr) {}

void ListaCanciones::agregarCD(CD cd) {
    // agregar un CD a la lista de canciones
}

