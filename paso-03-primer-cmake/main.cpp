// main.cpp — paso 3: el mismo hotel, ahora con reservas, compilado con CMake.
#include <iostream>
#include "habitacion.hpp"
#include "reserva.hpp"

int main() {
    Habitacion h1(101, 80.0);
    Habitacion h2(102, 95.5);
    Reserva r(h2, 3);
    std::cout << "Habitaciones creadas: " << Habitacion::getTotal() << "\n";
    std::cout << "Reserva de la " << h2.getNumero() << " (3 noches): " << r.getTotal() << " EUR\n";
    return 0;
}
