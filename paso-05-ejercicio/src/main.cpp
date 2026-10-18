// main.cpp — paso 5 (EJERCICIO).
// La clase Factura está escrita entera aquí, dentro de main.cpp.
// Tu tarea (ver la guía): moverla a include/factura.hpp + src/factura.cpp
// y añadir src/factura.cpp al CMakeLists.txt.
#include <iostream>
#include <string>
#include "habitacion.hpp"
#include "reserva.hpp"
#include "cliente.hpp"

// ======================= MOVER ESTO =======================
class Factura {
public:
    Factura(const Cliente& cliente, const Reserva& reserva)
        : cliente_(cliente), reserva_(reserva) {}

    double getBase() const { return reserva_.getTotal(); }
    double getIva() const { return getBase() * IVA; }
    double getTotal() const { return getBase() + getIva(); }

    void imprimir() const {
        std::cout << "FACTURA - " << cliente_.getNombre() << "\n";
        std::cout << "  Base:  " << getBase() << " EUR\n";
        std::cout << "  IVA:   " << getIva() << " EUR\n";
        std::cout << "  Total: " << getTotal() << " EUR\n";
    }

private:
    static constexpr double IVA = 0.10;   // IVA de hostelería
    const Cliente& cliente_;
    const Reserva& reserva_;
};
// ===================== HASTA AQUÍ ========================

int main() {
    Habitacion h(201, 120.0);
    Cliente ana("Ana Garcia", "12345678Z");
    Reserva r(h, 2);
    Factura f(ana, r);
    f.imprimir();
    return 0;
}
