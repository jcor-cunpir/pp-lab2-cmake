cmake_minimum_required(VERSION 3.15)
project(Hotel LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(hotel
    src/main.cpp
    src/habitacion.cpp
    src/reserva.cpp
    src/cliente.cpp
)

target_include_directories(hotel PRIVATE include)
