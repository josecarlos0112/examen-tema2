#include <stdio.h>
#include <stdlib.h>

// Estructura Estudiante en C
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char** materias;  // Para la gestión de materias
    int numMaterias;
};

// Función para mostrar un Estudiante
void mostrarEstudiante(const struct Estudiante* estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);

    // Mostrar materias
    printf("Materias inscritas:\n");
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        printf("- %s\n", estudiante->materias[i]);
    }
}
