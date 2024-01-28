#pragma once
#ifndef ADMINISTRADORNEURONAS_H
#define ADMINISTRADORNEURONAS_H

#include <list>
#include "Neurona.h"

class AdministradorNeuronas
{
    private:
        std::list<Neurona> listaNeuronas;

    public:
        // Métodos públicos
        void agregarInicio(const Neurona& neurona);
        void agregarFinal(const Neurona& neurona);
        void mostrar() const;
};

#endif // ADMINISTRADORNEURONAS_H
