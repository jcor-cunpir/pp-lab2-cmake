// reserva.hpp — una reserva de una habitación durante varias noches.
#pragma once
#include "habitacion.hpp"

class Reserva {
public:
    Reserva(const Habitacion& habitacion, int noches);
    double getTotal() const;       // precio por noche x noches

private:
    const Habitacion& habitacion_;
    int noches_;
};
