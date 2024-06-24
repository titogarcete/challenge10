#include <iostream>
#include <string>

int main() {
    // Solicitar al usuario que ingrese una cadena
    std::string cadena;
    std::cout << "Introduce una cadena de caracteres: ";
    std::getline(std::cin, cadena);

    // Eliminar los espacios en blanco y convertir a minúsculas para una comparación precisa
    std::string cadena_sin_espacios;
    for (char c : cadena) {
        if (c != ' ') {
            cadena_sin_espacios += tolower(c);
        }
    }

    // Determinar si la cadena sin espacios es un palíndromo
    int n = cadena_sin_espacios.length();
    bool es_palindromo = true;
    for (int i = 0; i < n / 2; ++i) {
        if (cadena_sin_espacios[i] != cadena_sin_espacios[n - i - 1]) {
            es_palindromo = false;
            break;
        }
    }

    // Mostrar el resultado
    if (es_palindromo) {
        std::cout << "La cadena es un palíndromo." << std::endl;
    } else {
        std::cout << "La cadena no es un palíndromo." << std::endl;
    }

    return 0;
}

