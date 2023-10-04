#pragma once
#include <string>

class Cancion {
public:
    std::string nombre;
    std::string artista;
    int duracion;

    Cancion(std::string nombre, std::string artista, int duracion);
};

class CD {
public:
    std::string nombre;
    CD* siguiente;
    Cancion* canciones;
    int numCanciones;

    CD(std::string nombre);
    void agregarCancion(Cancion cancion);
};

class ListaCanciones {
public:
    CD* primero;
    CD* ultimo;

    ListaCanciones();
    void agregarCD(CD cd);
};
