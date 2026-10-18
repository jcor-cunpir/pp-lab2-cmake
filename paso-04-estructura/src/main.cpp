// main.cpp — paso 4: el proyecto ya tiene la estructura estándar include/ + src/.
#include <iostream>
#include "habitacion.hpp"
#include "reserva.hpp"
#include "cliente.hpp"

int main() {
    Habitacion h(201, 120.0);
    Cliente ana("Ana Garcia", "12345678Z");
    Reserva r(h, 2);
    std::cout << "Cliente: " << ana.getNombre() << " (" << ana.getDni() << ")\n";
    std::cout << "Habitacion " << h.getNumero() << ", 2 noches: " << r.getTotal() << " EUR\n";
    return 0;
}
