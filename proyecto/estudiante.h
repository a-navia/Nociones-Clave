#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "persona.h"

class estudiante : public persona {
public:
    estudiante(const std::string &nombre, int edad, const std::string &genero, std::string grado);
    void mostrarDetalles() const;
private:
    std::string grado;
};
#endif