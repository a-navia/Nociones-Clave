//
// Created by navia on 17-Oct-24.
//

#include "matematicas.h"
#include <stdexcept>
//stdexcept proporciona una manera de manejar errores en programas C++.

int matematicas::suma(int a, int b) {
    return a + b;
}
int matematicas::resta(int a, int b) {
    return a - b;
}
int matematicas::multiplicacion(int a, int b) {
    return a * b;
}
//division por cero usando "throw std::invalid_argument" de library <stdexcept>
int matematicas::division(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division por cero");
    }
    return a / b;
}