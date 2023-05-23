#include "Test.h"
#include <fstream>
#include <iostream>

int main() {
    std::fstream archivo("db/equipos.txt");
    if (!archivo) {
        std::cout << "No se encontro el archivo." << std::endl;
    }
    Test::ejecutarMensajeDePrueba();
    return 0;
}