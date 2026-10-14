// main.cpp — USA la clase Habitacion. Solo conoce su interfaz (el .hpp).
#include <iostream>
#include "habitacion.hpp"

int main() {
    Habitacion h1(101, 80.0);
    Habitacion h2(102, 95.5);
    std::cout << "Habitacion " << h1.getNumero() << ": " << h1.getPrecio() << " EUR\n";
    std::cout << "Habitacion " << h2.getNumero() << ": " << h2.getPrecio() << " EUR\n";
    std::cout << "Total de habitaciones: " << Habitacion::getTotal() << "\n";
    return 0;
}
