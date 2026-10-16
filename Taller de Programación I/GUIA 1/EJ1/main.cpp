#include <algorithm>
#include <cctype>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <set>
#include <string>

enum class ResultadoJuego {
    Ganaste,
    IntentosAgotados,
    ErrorEntrada
};

char a_minuscula(char caracter) {
    return static_cast<char>(
        std::tolower(static_cast<unsigned char>(caracter)));
}

bool leer_palabra_secreta(std::string& palabra) {
    const std::filesystem::path archivo_palabras =
        std::filesystem::path(__FILE__).parent_path() / "palabras.txt";
    std::ifstream archivo(archivo_palabras);
    if (!archivo) {
        std::cerr << "No se pudo abrir " << archivo_palabras << ".\n";
        return false;
    }

    while (std::getline(archivo, palabra)) {
        const auto inicio = std::find_if(
            palabra.begin(), palabra.end(), [](unsigned char c) {
                return !std::isspace(c);
            });
        if (inicio == palabra.end()) {
            continue;
        }

        const auto fin = std::find_if(
            palabra.rbegin(), palabra.rend(), [](unsigned char c) {
                return !std::isspace(c);
            }).base();
        palabra = std::string(inicio, fin);

        if (!palabra.empty()) {
            std::transform(
                palabra.begin(), palabra.end(), palabra.begin(), a_minuscula);
            return true;
        }
    }

    std::cerr << archivo_palabras << " no contiene ninguna palabra.\n";
    return false;
}

ResultadoJuego jugar(const std::string& palabra_secreta) {
    constexpr int intentos_iniciales = 5;
    int intentos_restantes = intentos_iniciales;
    std::set<char> letras_ingresadas;
    std::set<char> letras_erroneas;

    std::cout << "Bienvenido al ahorcado de FIUBA!\n";

    while (true) {
        std::cout << "\nLa palabra hasta el momento es: ";
        for (char letra : palabra_secreta) {
            std::cout << (letras_ingresadas.count(letra) ? letra : '_') << ' ';
        }
        std::cout << "\nAdivinaste las siguientes letras:";
        for (char letra : palabra_secreta) {
            if (letras_ingresadas.count(letra)) {
                std::cout << ' ' << letra;
            }
        }

        std::cout << "\nLetras incorrectas:";
        for (char letra : letras_erroneas) {
            std::cout << ' ' << letra;
        }
        std::cout << "\nTe quedan " << intentos_restantes << " intentos.\n";

        const bool palabra_completa = std::all_of(
            palabra_secreta.begin(), palabra_secreta.end(),
            [&letras_ingresadas](char letra) {
                return letras_ingresadas.count(letra) > 0;
            });
        if (palabra_completa) {
            return ResultadoJuego::Ganaste;
        }

        std::cout << "Ingresa una letra: ";
        std::string entrada;
        if (!(std::cin >> entrada)) {
            std::cerr << "\nNo se pudo leer la entrada.\n";
            return ResultadoJuego::ErrorEntrada;
        }
        if (entrada.size() != 1 ||
            !std::isalpha(static_cast<unsigned char>(entrada[0]))) {
            std::cout << "Ingresa una sola letra.\n";
            continue;
        }

        const char letra = a_minuscula(entrada[0]);
        if (letras_ingresadas.count(letra)) {
            std::cout << "Ya ingresaste esa letra.\n";
            continue;
        }

        letras_ingresadas.insert(letra);
        if (palabra_secreta.find(letra) != std::string::npos) {
            std::cout << "¡Bien! La palabra contiene " << letra << ".\n";
        } else {
            letras_erroneas.insert(letra);
            --intentos_restantes;
            std::cout << "La palabra no contiene " << letra << ".\n";
            if (intentos_restantes == 0) {
                return ResultadoJuego::IntentosAgotados;
            }
        }
    }
}

int main() {
    std::string palabra_secreta;
    if (!leer_palabra_secreta(palabra_secreta)) {
        return 1;
    }

    switch (jugar(palabra_secreta)) {
        case ResultadoJuego::Ganaste:
            std::cout << "¡Ganaste!\n";
            return 0;
        case ResultadoJuego::IntentosAgotados:
            std::cout << "Se agotaron los intentos. La palabra era: "
                      << palabra_secreta << '\n';
            return 0;
        case ResultadoJuego::ErrorEntrada:
            return 1;
    }

    return 0;
}
