//
// Created by navia on 10-Oct-24.
//

#include "persona.h"
#include <iostream>
#include <utility>

persona::persona(std::string nombre, int edad, std::string genero)
    : nombre(std::move(nombre)), edad(edad), genero(std::move(genero)) {}

std::string persona::getNombre() const {
    return nombre;
}

int persona::getEdad() const {
    return edad;
}

std::string persona::getGenero() const {
    return genero;
}
void persona::mostrarDetallePersona() const {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Edad: " << getEdad() << std::endl;
    std::cout << "Genero: " << getGenero() << std::endl;
}






