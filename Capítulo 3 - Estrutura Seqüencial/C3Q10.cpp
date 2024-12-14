#include <iostream>
#include <iomanip>
#include <cmath> // to use the pow function

int main(void)
{
    float   area, raio;

    std::cout << "Introduz apenas o valor numérico do raio do círculo (em u.m.): ";
    std::cin >> raio;
    area = 3.1415 * pow(raio, 2);
    std::cout << "A área do círculo é: " << std::setprecision(5) << area << " u.a." << std::endl;
    return 0;
}
// u.m. = unidades de medida
// u.a. = unidades de área