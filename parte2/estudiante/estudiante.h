//
// Created by usuario on 14/12/2023.
//

#ifndef ESTUDIANTE_ESTUDIANTE_H
#define ESTUDIANTE_ESTUDIANTE_H

#include <iostream>
#include <string>
#include <vector>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;  // Para la gestión de materias
};

void mostrarEstudiante(const Estudiante& estudiante);



#endif //ESTUDIANTE_ESTUDIANTE_H
