// habitacion.hpp — LA INTERFAZ: qué se puede hacer con una Habitacion.
// Solo DECLARA los métodos (dice que existen); no dice cómo funcionan.
#pragma once

class Habitacion {
public:
    Habitacion(int numero, double precio);
    int getNumero() const;
    double getPrecio() const;
    static int getTotal();         // cuántas habitaciones se han creado

private:
    int numero_;
    double precio_;
    static int total_;             // UNO para toda la clase
};
