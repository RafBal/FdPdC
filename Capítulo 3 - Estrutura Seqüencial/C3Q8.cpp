#include <iostream>
#include <iomanip>

int main(void)
{
    float dep, taxa, rend, total;

    std::cout << "Aviso: utilizar ponto no lugar de vírgula para números decimais.";
    std::cout << "Digita o valor do depósito em R$ ";
    std::cin >> dep;
    std::cout << "Agora introduz o valor da taxa em % ";
    std::cin >> taxa;
    rend = dep * taxa / 100.0f;
    total = dep + rend;
    std::cout << "O valor após o rendimento é R$ " << std::setprecision(5) << total << std::endl;
    return (0);
}