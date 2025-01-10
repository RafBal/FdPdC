#include <iostream>

int main(void)
{
    int massa_saco, racao_gato1, racao_gato2, total_5;

    std::cout << "Introduz apenas o valor da massa do saco de ração em gramas: ";
    std::cin >> massa_saco;
    std::cout << "Da mesma forma, escreve o quanto o gato 1 consumirá diariamente: ";
    std::cin >> racao_gato1;
    std::cout << "Agora faz o mesmo para o gato 2: ";
    std::cin >> racao_gato2;
    total_5 = massa_saco - 5 * (racao_gato1 + racao_gato2);
    std::cout << "Após 5 dias, restarão " << total_5 << " gramas de ração." << std::endl;
    return (0);
}