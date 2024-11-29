#include <iostream> // for inputs and outputs
#include <iomanip> // to use the setprecision function

int main(void)
{
    int nota1, nota2, nota3, peso1, peso2, peso3, media;
    std::cout << "Declara o valor da primeira nota: ";
    std::cin >> nota1;
    std::cout << "Declara o peso da primeira nota: ";
    std::cin >> peso1;
    std::cout << "Declara o valor da segunda nota: ";
    std::cin >> nota2;
    std::cout << "Declara o peso da segunda nota: ";
    std::cin >> peso2;
    std::cout << "Declara o valor da terceira nota: ";
    std::cin >> nota3;
    std::cout << "Declara o peso da terceira nota: ";
    std::cin >> peso3;
    
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    std::cout << "A média poderada dos valores fornecidos é: " << std::setprecision(2) << media << std::endl;
    return 0;
}
