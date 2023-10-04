#pragma once
#include "ListaCanciones.h"

class ReproductorMusica {
public:
    void agregarCancion(Cancion cancion);
    void verColaReproduccion();
    void ordenarCola(std::string criterio);
    void reproducirActual();
    void reproducirSiguiente();
};
