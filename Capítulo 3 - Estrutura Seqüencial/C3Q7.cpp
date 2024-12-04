#include <iostream>
#include <iomanip>

int main(void)
{
    float sal, grat, imp, salreceber;

    imp = (100.0f - 10.0f) / 100.0f; // 10% decrease
    grat = 50;
    std::cout << "Digita o salário base: ";
    std::cin >> sal;
    salreceber = sal * imp + grat;
    std::cout << "O salário a receber é R$ " << std::setprecision(4) << salreceber << std::endl;
    return 0;
}