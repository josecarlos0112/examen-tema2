#ifndef ESTUDIANTE_ESTUDIANTE_H
#define ESTUDIANTE_ESTUDIANTE_H

#include <iostream>
#include <string>
#include <vector>

struct Asistencia;  // Declaración anticipada para evitar ciclos de inclusión

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
    std::vector<Asistencia> asistencias;  // Agrega esta línea para el vector de asistencias
};

void mostrarEstudiante(const Estudiante& estudiante);

#endif //ESTUDIANTE_ESTUDIANTE_H