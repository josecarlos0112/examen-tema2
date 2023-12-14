#include <iostream>
#include <vector>
#include <string>

// Estructura Estudiante en C++
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;  // Para la gestión de materias
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
