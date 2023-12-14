// estudianteC.h
#pragma once

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void mostrarEstudiante(const struct Estudiante* estudiante);
