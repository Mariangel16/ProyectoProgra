// Proyecto Reproductor.cpp 

#include <iostream>
#include "ReproductorMusica.h"

int main()
{
    ReproductorMusica reproductor;

    // Cargar CDs desde una carpeta
    std::string folderPath;
    std::cout << "Ingrese la ruta de la carpeta que contiene los archivos de CDs: ";
    std::cin >> folderPath;

    // Leer archivos de CDs desde la carpeta

    int opcion;
    do {
        std::cout << "Menu Principal:" << std::endl;
        std::cout << "1. Agregar Cancion" << std::endl;
        std::cout << "2. Ver Cola de Reproduccion" << std::endl;
        std::cout << "3. Ordenar" << std::endl;
        std::cout << "4. Reproduccion Actual" << std::endl;
        std::cout << "5. Reproducir Siguiente" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            // agregar una canción a la cola de reproducción
            break;
        }
        case 2: {
            // mostrar la cola de reproducción
            break;
        }
        case 3: {
            // ordenar la cola de reproducción
            break;
        }
        case 4: {
            // Reproducción Actual
            reproductor.reproducirActual();
            break;
        }
        case 5: {
            // Reproducir Siguiente
            reproductor.reproducirSiguiente();
            break;
        }
        case 6: {
            std::cout << "Saliendo del programa." << std::endl;
            break;
        }
        default: {
            std::cout << "Opción no válida." << std::endl;
            break;
        }
        }
    } while (opcion != 6);

    return 0;
}


