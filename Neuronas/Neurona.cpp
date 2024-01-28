#include "Neurona.h"
#include <iostream>

// Implementación de los métodos de Neurona

Neurona::Neurona(int _id, float _voltaje, int _posX, int _posY, int _red, int _green, int _blue)
    : id(_id), voltaje(_voltaje), posX(_posX), posY(_posY), red(_red), green(_green), blue(_blue) {}

void Neurona::print() const {
    std::cout << "Neurona ID: " << id << ", Voltaje: " << voltaje
        << ", Posicion: (" << posX << ", " << posY << ")"
        << ", Color: (" << red << ", " << green << ", " << blue << ")" << std::endl;
}