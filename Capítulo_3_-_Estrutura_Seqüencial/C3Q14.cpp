#include <iostream>

int main(void)
{
    unsigned int ano_atual, ano_nascimento, idade_atual, idade_2050;

    std::cout << "Digita o ano do teu nascimento: ";
    std::cin >> ano_nascimento;
    std::cout << "Digita o ano atual: ";
    std::cin >> ano_atual;
    idade_atual = ano_atual - ano_nascimento;
    std::cout << "A tua idade é: " << idade_atual << std::endl;
    idade_2050 = 2050 - ano_atual + idade_atual;
    std::cout << "A tua idade em 2050 será: " << idade_2050 << std::endl;
    return 0;
}