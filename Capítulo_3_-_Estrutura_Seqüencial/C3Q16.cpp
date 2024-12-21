#include <iostream> 

int main(void)
{
    int ht;
    float vsmin, vht, bruto, i, salaliq;
    i = 0.03;
    std::cout << "Digita o número de horas trabalhadas: ";
    std::cin >> ht;
    std::cout << "Digita agora o valor do salário mínimo por hora: R$";
    std::cin >> vsmin;
    vht = vsmin / 2;
    bruto = vht * ht;
    salaliq = bruto * (1 - i);
    std::cout << "O salário a receber é: R$" << salaliq << std::endl;
    return 0;
}