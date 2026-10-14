// reserva.cpp
#include "reserva.hpp"

Reserva::Reserva(const Habitacion& habitacion, int noches)
    : habitacion_(habitacion), noches_(noches) {}

double Reserva::getTotal() const {
    return habitacion_.getPrecio() * noches_;
}
