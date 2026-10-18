// cliente.hpp — un cliente del hotel.
#pragma once
#include <string>

class Cliente {
public:
    Cliente(const std::string& nombre, const std::string& dni);
    std::string getNombre() const;
    std::string getDni() const;

private:
    std::string nombre_;
    std::string dni_;
};
