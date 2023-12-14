//
// Created by usuario on 14/12/2023.
//

#ifndef ASISTENCIA_ASISTENCIA_H
#define ASISTENCIA_ASISTENCIA_H

#pragma once

#include <string>
#include <vector>

struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;
};

void registrarAsistencia(Estudiante& estudiante, const Asistencia& asistencia);
void mostrarAsistencia(const Estudiante& estudiante);



#endif //ASISTENCIA_ASISTENCIA_H
