// factura.hpp — INTERFAZ: solo declaraciones.
#pragma once
#include "cliente.hpp"
#include "reserva.hpp"

class Factura {
public:
    Factura(const Cliente& cliente, const Reserva& reserva);
    double getBase() const;
    double getIva() const;
    double getTotal() const;
    void imprimir() const;

private:
    static constexpr double IVA = 0.10;   // IVA de hostelería
    const Cliente& cliente_;
    const Reserva& reserva_;
};
