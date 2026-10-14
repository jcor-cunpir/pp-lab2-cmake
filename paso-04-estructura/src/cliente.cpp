// cliente.cpp
#include "cliente.hpp"

Cliente::Cliente(const std::string& nombre, const std::string& dni)
    : nombre_(nombre), dni_(dni) {}

std::string Cliente::getNombre() const { return nombre_; }
std::string Cliente::getDni() const { return dni_; }
