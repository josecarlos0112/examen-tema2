// estudiante.cpp
#include <iostream>
#include "estudiante.h"

// Función para mostrar un Estudiante
void mostrarEstudiante(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;

    // Mostrar materias
    std::cout << "Materias inscritas:" << std::endl;
    for (const auto& materia : estudiante.materias) {
        std::cout << "- " << materia << std::endl;
    }
}
