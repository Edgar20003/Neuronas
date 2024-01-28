#include "AdministradorNeuronas.h"

// Implementaci�n de los m�todos de AdministradorNeuronas

void AdministradorNeuronas::agregarInicio(const Neurona& neurona) {
    listaNeuronas.push_front(neurona);
}

void AdministradorNeuronas::agregarFinal(const Neurona& neurona) {
    listaNeuronas.push_back(neurona);
}

void AdministradorNeuronas::mostrar() const {
    for (const auto& neurona : listaNeuronas) {
        neurona.print();
    }
}