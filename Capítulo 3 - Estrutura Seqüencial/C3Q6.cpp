#include <iostream>
#include <iomanip>

int main(void)
{
    float   sal, salreceber, grat, imp;

    grat = 5.0f / 100.0f + 1.0f; // 5% increase
    imp = (100.0f - 7.0f) / 100.0f; // 7% decrease
    std::cout << "Introduz o salário em R$: ";
    std::cin >> sal;
    salreceber = sal * grat * imp;
    std::cout << "O salário a receber é R$ " << std::setprecision(4) << salreceber << std::endl;
    return (0);
}
