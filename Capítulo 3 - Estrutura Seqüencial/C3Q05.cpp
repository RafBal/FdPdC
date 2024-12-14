#include <iostream>
#include <iomanip>

int main(void) 
{
    float sal, perc, novosal;

    std::cout << "Introduz o salário em R$: ";
    std::cin >> sal;
    std::cout << "Agora escreve o aumento percentual em %: ";
    std::cin >> perc;
    novosal = sal + sal * perc / 100;
    std::cout << "O novo salário é: R$ " << std::fixed << std::setprecision(2) << novosal << std::endl;
    return (0);
}