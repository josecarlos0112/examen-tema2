#include <iostream>
#include "asistencia.h"
#include "estudiante.h"

int main() {
    Estudiante estudiante;
    estudiante.nombre = "Juan";
    estudiante.edad = 20;
    estudiante.promedio = 8.5;

    Asistencia asistencia1;
    asistencia1.fecha = "2023-12-14";
    asistencia1.materia = "Programación C++";
    asistencia1.estado = "Asistió";

    registrarAsistencia(estudiante, asistencia1);

    mostrarAsistencia(estudiante);

    return 0;
}
