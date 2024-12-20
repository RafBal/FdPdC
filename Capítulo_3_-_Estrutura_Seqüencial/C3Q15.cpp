#include <iostream>

int main (void)
{
    float   p_fab, perc_l, perc_i, vlr_l, vlr_i, p_final;

    std::cout << "Digita o preço de fábrica R$";
    std::cin >> p_fab;
    std::cout << "Digita o percentual do lucro %";
    std::cin >> perc_l;
    std::cout << "Digita o percentual do imposto %";
    std::cin >> perc_i;
    vlr_l = p_fab * perc_l / 100;
    vlr_i = p_fab * perc_i / 100;
    p_final = p_fab + vlr_l + vlr_i;
    std::cout << "O preço final do veículo é: R$" << p_final << std::endl;

    return (0);
}