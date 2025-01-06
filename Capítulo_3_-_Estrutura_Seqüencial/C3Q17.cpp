#include <iostream>
#include <iomanip>

int main(void)
{
    float sal, ch1, ch2, cpmf1, cpmf2, sfinal;
    std::cout << "Usar ponto para números decimais." << std::endl;
    std::cout << "Salário em R$";
    std::cin >> sal;
    std::cout << "Valor do primeiro cheque em R$";
    std::cin >> ch1;
    std::cout << "Valor do segundo cheque em R$";
    std::cin >> ch2;
    cpmf1 = ch1 * 0.38;
    cpmf2 = ch2 * 0.38;
    sfinal = sal - (ch1 + ch2 + cpmf1 + cpmf2);
    std::cout << "Saldo da conta R$" << std::fixed;
    std::cout << std::setprecision(2) << sfinal << std::endl;
    return (0);
}