//
// Created by usuario on 14/12/2023.
//

#include "asistencia.h"
#include <iostream>

void registrarAsistencia(Estudiante& estudiante, const Asistencia& asistencia) {
    // Implementación para registrar la asistencia en el estudiante
    // Puedes agregar lógica adicional según sea necesario
    estudiante.asistencias.push_back(asistencia);
}

void mostrarAsistencia(const Estudiante& estudiante) {
    // Implementación para mostrar la asistencia del estudiante
    std::cout << "Registro de Asistencia para " << estudiante.nombre << ":" << std::endl;

    for (const auto& asistencia : estudiante.asistencias) {
        std::cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia << ", Estado: " << asistencia.estado << std::endl;
    }
}
