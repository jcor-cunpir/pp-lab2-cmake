// factura.cpp — IMPLEMENTACIÓN: cada método lleva delante "Factura::".
#include "factura.hpp"
#include <iostream>

Factura::Factura(const Cliente& cliente, const Reserva& reserva)
    : cliente_(cliente), reserva_(reserva) {}

double Factura::getBase() const { return reserva_.getTotal(); }
double Factura::getIva() const { return getBase() * IVA; }
double Factura::getTotal() const { return getBase() + getIva(); }

void Factura::imprimir() const {
    std::cout << "FACTURA - " << cliente_.getNombre() << "\n";
    std::cout << "  Base:  " << getBase() << " EUR\n";
    std::cout << "  IVA:   " << getIva() << " EUR\n";
    std::cout << "  Total: " << getTotal() << " EUR\n";
}
