#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
    float num, quad, cubo, r2, r3;

    num = -1.0;
    while (num <= 0)
    {
        std::cout << "Introduz um número positivo: ";
        std::cin >> num;
    }
    quad = pow(num, 2);
    std::cout << "O número " << num << " ao quadrado é: " << quad << std::endl;
    cubo = pow(num, 3);
    std::cout << "O número " << num << " ao cubo é: " << cubo << std::endl;
    r2 = sqrt(num);
    std::cout << "A raíz quadrada do número " << num << " é: " << r2 << std::endl;
    r3 = cbrt(num);
    std::cout << "A raíz cúbica do número " << num << " é: " << r3 << std::endl;
    return 0;
}
