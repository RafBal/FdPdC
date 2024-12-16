#include <iostream> // for inputs and outputs

int main(){

    int n1, n2, n3, n4, soma;
    std::cout << "Introduz o primeiro número:\n";
    std::cin >> n1;
    std::cout << "Introduz o segundo número:\n";
    std::cin >> n2;
    std::cout << "Introduz o terceiro número:\n";
    std::cin >> n3;
    std::cout << "Introduz o quarto número:\n";
    std::cin >> n4;
    soma = n1 + n2 + n3 + n4;

    std::cout << "A soma dos quatro números é: " << soma << "." << std::endl;
    return 0;
}