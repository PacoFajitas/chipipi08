#include "easyfind.hpp" // Para std::runtime_error

int main() {
    std::vector<int> vec;

    // Insertar elementos en el vector
    for (int i = 0; i < 20; i++) {
        vec.push_back(i);
    }

    std::cout << "Tamaño del vector: " << vec.size() << std::endl;
    std::cout << "Valores del vector en orden: " << std::endl;

    // numero entre 0 y 19 (válido para el tamaño del vector)
    int i = 8;
    std::cout << "Número aleatorio generado: " << i << std::endl;

    // Imprimir los elementos del vector
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << std::endl;
        if (*it == i) {
            std::cout << "El número " << i << " se encuentra en la posición: "
                      << std::distance(vec.begin(), it) << std::endl;
        }
    }

    try {
        std::cout << "Empieza la búsqueda en easyfind" << std::endl;
        std::cout << "Buscando el número: " << i << std::endl;
        std::vector<int>::iterator it = easyfind(vec, i);
        std::cout << "Resultado de easyfind: " << *it << std::endl;

        // Intentar encontrar un número fuera de rango para generar una excepción
        std::cout << "Buscando un número fuera de rango..." << std::endl;
        easyfind(vec, 20000);  // Esto debería lanzar una excepción
    } catch (const std::exception& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    return 0;
}
