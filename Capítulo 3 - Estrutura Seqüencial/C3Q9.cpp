#include <iostream>
#include <iomanip>

int main(void)
{
    float base, altura, area;

    std::cout << "Aviso: utilizar ponto no lugar de vírgula para números decimais." << std::endl;
    std::cout << "Introduz apenas o valor numérico da base do triângulo (em u.m.): ";
    std::cin >> base;
    std::cout << "Agora escreve apenas o valor numérico da altura (em u.m.): ";
    std::cin >> altura;
    area = (base * altura) / 2;
    std::cout << "A área do triângulo é: " << std::setprecision(4) << area << " u.a." << std::endl;
    return 0;
}
// u.m. = unidades de medida
// u.a. = unidades de área