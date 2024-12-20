#include <iostream>
#include <iomanip>

int main(void)
{
    float pes, polegadas, jardas, milhas;

    pes = 0;
    while (pes <= 0)
    {
        std::cout << "Introduz a medida em pés: ";
        std::cin >> pes;
    }
    polegadas = pes * 12;
    std::cout << "A tua medida em polegadas é: " << std::setprecision(6) << polegadas << std::endl;
    jardas = pes / 3;
    std::cout << "A tua medida em jardas é: " << std::setprecision(6) << jardas << std::endl;
    milhas = jardas / 1760;
    std::cout << "A tua medida em milhas é: " << std::setprecision(6) << milhas << std::endl;
    return 0;
}