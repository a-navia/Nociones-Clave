//
// Created by navia on 10-Oct-24.
//

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class persona {
    std::string nombre;
    int edad;
    std::string genero;

public:
    persona(std::string nombre, int edad, std::string genero);
    void setNombre(const std::string &nombre);
    std::string getNombre() const;
    void setEdad(int edad);
    int getEdad() const;
    void setGenero(const std::string &genero);
    std::string getGenero() const;
    void mostrarDetallePersona() const;
};

#endif //PERSONA_H
