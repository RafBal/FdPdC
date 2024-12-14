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
    cubo = pow(num, 3);
    r2 = sqrt(num);
    r3 = cbrt(num);
    

    return 0;
}
