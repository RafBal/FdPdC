#include <iostream>
#include <iomanip>
#include <cmath> // to enable power calculation

int main(void)
{
    float num1, num2, r1, r2;

    num1 = -1;
    while (num1 <= 0)
    {
        std::cout << "Introduz o primeiro número maior que zero: ";
        std::cin >> num1;
    }
    num2 = 0;
    while (num2 <= 0)
    {
        std::cout << "Agora digita o segundo número maior que zero: ";
        std::cin >> num2;
    }
    r1 = pow(num1, num2);
    std::cout << "O número " << num1 << " elevado a " << num2 << " é igual a " << std::setprecision(6) <<  r1 << std::endl;
    r2 = pow(num2, num1);
    std::cout << "O número " << num2 << " elevado a " << num1 << " é igual a " << std::setprecision(6) <<r2 << std::endl;
    return 0;
}