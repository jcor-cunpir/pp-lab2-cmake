# CMakeLists.txt — la "receta" que CMake lee para saber cómo construir el programa.

# 1. Versión mínima de CMake que necesita este proyecto.
cmake_minimum_required(VERSION 3.15)

# 2. Nombre del proyecto y lenguaje (CXX = C++).
project(Hotel LANGUAGES CXX)

# 3. Usar C++17.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4. El ejecutable se llamará "hotel" y se construye con ESTOS .cpp
#    (los .hpp no se ponen: los incluyen los .cpp).
add_executable(hotel
    main.cpp
    habitacion.cpp
    reserva.cpp
)
