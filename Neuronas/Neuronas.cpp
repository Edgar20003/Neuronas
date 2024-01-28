#include "Neurona.h"
#include "AdministradorNeuronas.h"
#include <iostream>

int main() {
    // Ejemplo de uso
    AdministradorNeuronas adminNeuronas;

    Neurona neurona1(1, 3.5, 10, 20, 255, 0, 0);
    Neurona neurona2(2, 2.8, 15, 25, 0, 255, 0);
    Neurona neurona3(3, 4.2, 8, 16, 0, 0, 255);

    adminNeuronas.agregarInicio(neurona1);
    adminNeuronas.agregarFinal(neurona2);
    adminNeuronas.agregarFinal(neurona3);

    adminNeuronas.mostrar();

    return 0;
}