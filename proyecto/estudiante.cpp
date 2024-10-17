#include "estudiante.h"
#include <iostream>
#include <utility>

estudiante::estudiante(const std::string &nombre, int edad, const std::string &genero, std::string grado)
    : persona(nombre, edad, genero), grado(std::move(grado)) {}

void estudiante::mostrarDetalles() const {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Edad: " << getEdad() << std::endl;
    std::cout << "Genero: " << getGenero() << std::endl;
    std::cout << "Grado: " << grado << std::endl;

}
