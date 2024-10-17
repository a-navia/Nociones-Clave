
#include <iostream>
#include <fmt/core.h>
#include "estudiante.h"
#include "proyecto 2/nuevo.h"
#include "proyecto 2/funciones.h"
#include "proyecto 2/matematicas.h"
//ejercicio 5
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))
float circumferencia(float radio, float pi){
    return 2 * pi * radio;
}
//ejercicio 1
int g = 20;
int suma(int a, int b) {
    return a + b;
}
int main() {
    //ejercicio 1
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;
    //ejercicio 2 persona
    persona p("ana", 30, "Femenino");
    //objeto persona
    p.mostrarDetallePersona();
    //ejercicio 2 estudiante
    estudiante est("Juan", 20, "Masculino", "Segundo Anio");
    est.mostrarDetalles();
    // ejercicio 3
    nuevo n;
    n.pruebanuevo();
    //ejercicio 4
    funciones f;
    std::cout << "La suma es: " << f.suma(5, 3) << std::endl;
    std::cout << "La resta es: " << f.resta(5, 3) << std::endl;
    std::cout << "La multiplicacion es: " << f.multiplicacion(5, 3) << std::endl;
    //uso de library matematicas
    matematicas m;
    int a = 10, b = 5;
    std::cout << "Suma: " << m.suma(a, b) << std::endl;
    std::cout << "Resta: " << m.resta(a, b) << std::endl;
    std::cout << "Multiplicacion: " << m.multiplicacion(a, b) << std::endl;
    std::cout << "Division: " << m.division(a, b) << std::endl;
//ejercicio 5 uso de pi y area de un circulo
    std::cout << "circumferencia: " << circumferencia(6, PI) << std::endl;
    std::cout << "area circulo: " << AREA_CIRCULO(5)<< std::endl;
//ejercicio 5 usando iostream
    float radio, areacirc;
    std::cout << "radio de tu circulo?: ";
    std::cin >> radio;
    areacirc = AREA_CIRCULO(radio);
    std::cout << "El area de tu circulo es: " << areacirc << std::endl;
    return 0;
}
