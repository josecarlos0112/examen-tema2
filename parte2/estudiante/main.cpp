#include <iostream>
#include <vector>
#include <string>
#include "estudiante.h"

int main() {
    Estudiante estudiante;
    estudiante.nombre = "Juan";
    estudiante.edad = 20;
    estudiante.promedio = 8.5;

    mostrarEstudiante(estudiante);

    return 0;
}


