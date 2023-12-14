
#include <iostream>
#include "estudiante.h"
#include <vector>
#include <string>



void mostrarEstudiante(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;


    std::cout << "Materias inscritas:" << std::endl;
    for (const auto& materia : estudiante.materias) {
        std::cout << "- " << materia << std::endl;
    }
}
