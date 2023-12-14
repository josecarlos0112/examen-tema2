//
// Created by usuario on 14/12/2023.
//

#include "estudiante.h"
#include <vector>
#include <string>

// Estructura Estudiante en C++
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;  // Para la gestión de materias
};

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