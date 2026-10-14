# LAB 2 · CMake: de los ficheros `.cpp` al ejecutable

**Proyectos de Programación · CUNEF · curso 2026-27**

Código de partida de la práctica de laboratorio de CMake. **Sigue la guía en PDF paso a paso**
(está en Canvas y también en este repositorio: [`Practica CMake - 2026.10.26.pdf`](Practica%20CMake%20-%202026.10.26.pdf)).

## Cómo descargarlo

```bash
cd ~/PP            # o la carpeta donde guardes lo de la asignatura
git clone https://github.com/jcor-cunpir/pp-lab2-cmake.git
cd pp-lab2-cmake
```

## Qué hay en cada carpeta

| Carpeta | Qué se practica |
| --- | --- |
| `paso-01-un-fichero/` | Compilar y ejecutar un programa de un solo fichero con `g++` |
| `paso-02-varios-ficheros/` | Varios ficheros: compilar (`g++ -c`) y enlazar; errores del compilador y del enlazador |
| `paso-03-primer-cmake/` | El primer `CMakeLists.txt`: configurar, compilar y recompilar solo lo que cambia |
| `paso-04-estructura/` | La estructura profesional `include/` + `src/`, warnings, y un `.cpp` que falta en el `CMakeLists.txt` |
| `paso-05-ejercicio/` | **Ejercicio**: separar la clase `Factura` en `factura.hpp` + `factura.cpp` |
| `paso-05-solucion/` | La solución del ejercicio |

Si te atascas en un paso, puedes pasar al siguiente: cada carpeta empieza ya resuelta respecto a la anterior.

## Los comandos de CMake (a partir del paso 3)

| | Windows (PowerShell) | Mac (Terminal) |
| --- | --- | --- |
| Configurar (solo la 1.ª vez) | `cmake -S . -B build -G Ninja` | `cmake -S . -B build` |
| Compilar (cada vez) | `cmake --build build` | `cmake --build build` |
| Ejecutar | `.\build\hotel.exe` | `./build/hotel` |

Para vuestro proyecto, partid de la plantilla: https://github.com/jcor-cunpir/pp-plantilla-proyecto
