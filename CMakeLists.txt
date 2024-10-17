cmake_minimum_required(VERSION 3.29)
project(Nociones_Clave)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Nociones_Clave
        proyecto/main.cpp
        proyecto/main.h
        proyecto/persona.h
        proyecto/persona.cpp
        proyecto/estudiante.cpp
        proyecto/estudiante.h
        "proyecto 2/nuevo.cpp"
        "proyecto 2/nuevo.h"
        "proyecto 2/funciones.cpp"
        "proyecto 2/funciones.h"
        "proyecto 2/matematicas.cpp"
        "proyecto 2/matematicas.h"
)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
add_library(matematicas STATIC "proyecto 2/matematicas.cpp")
target_link_libraries(Nociones_Clave PRIVATE fmt::fmt PRIVATE matematicas)
