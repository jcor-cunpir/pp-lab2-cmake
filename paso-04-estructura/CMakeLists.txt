cmake_minimum_required(VERSION 3.15)
project(Hotel LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Warnings activados: el compilador nos avisa de errores probables.
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Los .cpp ahora viven en la carpeta src/
add_executable(hotel
    src/main.cpp
    src/habitacion.cpp
    src/reserva.cpp
)

# Los .hpp viven en la carpeta include/: hay que decírselo al compilador.
target_include_directories(hotel PRIVATE include)
