cmake_minimum_required(VERSION 3.26)
project(plantilla_tp3_algo2)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Werror -Wconversion)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../")
set(CXXFLAGS "-Wall -Werror -Wconversion")
set(CMAKE_CXX_FLAGS "${CXXFLAGS}")

include_directories(include)
include_directories(src)

add_executable(plantilla_tp3_algo2
        include/Test.h
        src/main.cpp
        src/Test.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "programa.exe")

# Este archivo muy probablemente tengan que modificarlo. Tengan presente de declarar apropiadamente cómo debe ser la
# compilación para no tener problemas con los archivos: las rutas van a depender del path en el que se esté ejecutando
# el programa. Lo ideal es que el usuario simplemente use el CMakeLists.txt o la línea de compilación TAL CUAL ESTÁ
# (la pueden cambiar). Actualmente el archivo ejecutable se va a generar en el mismo directorio del CMakeLists.txt.