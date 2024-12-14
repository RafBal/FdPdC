#include <iostream>
#include <iomanip>

int main(void)
{
    float sal, novosal;
    std::cout << "Escreve o salário atual em R$: ";
    std::cin >> sal;
    novosal = sal * 1.25;
    std::cout << "O novo salário é: R$ " << std::fixed << std::setprecision(2) << novosal << std::endl;
    return (0);
}
// Use std::fixed to avoid showing in power of 10.