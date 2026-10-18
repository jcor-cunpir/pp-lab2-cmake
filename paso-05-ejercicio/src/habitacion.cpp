// habitacion.cpp — LA IMPLEMENTACIÓN: cómo funciona cada método.
#include "habitacion.hpp"

int Habitacion::total_ = 0;        // definición del atributo static

Habitacion::Habitacion(int numero, double precio) : numero_(numero), precio_(precio) {
    total_++;
}

int Habitacion::getNumero() const { return numero_; }
double Habitacion::getPrecio() const { return precio_; }
int Habitacion::getTotal() { return total_; }
