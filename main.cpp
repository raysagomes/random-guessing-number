#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int numeroAleatorio = std::rand() % 10 + 1;

    int tentativa;
    bool acertou = false;

    std::cout << "Adivinhe o numero de 1 a 10!" << std::endl;

    while (!acertou) {
        std::cout << "Digite sua tentativa: ";
        std::cin >> tentativa;

        if (tentativa == numeroAleatorio) {
            std::cout << "Acertou! Parabens!" << std::endl;
            acertou = true;
        } else {
            std::cout << "Tente novamente." << std::endl;
        }
    }

    return 0;
}
