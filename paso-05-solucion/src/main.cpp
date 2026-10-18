// main.cpp — paso 5 (SOLUCIÓN): main solo USA las clases; cada una vive en su .hpp/.cpp.
#include "habitacion.hpp"
#include "reserva.hpp"
#include "cliente.hpp"
#include "factura.hpp"

int main() {
    Habitacion h(201, 120.0);
    Cliente ana("Ana Garcia", "12345678Z");
    Reserva r(h, 2);
    Factura f(ana, r);
    f.imprimir();
    return 0;
}
