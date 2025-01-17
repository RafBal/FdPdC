#include <iostream>

int main(void)
{
    float   h_deg, h_alc, q_deg;

    std::cout << "Qual o tamanho do degrau em metros? ";
    std::cin >> h_deg;
    std::cout << "Qual o tamanho da altura pretendida subindo a escada em metros? ";
    std::cin >> h_alc;
    q_deg = h_alc / h_deg;
    std::cout << "Tu deves subir " << q_deg << " degraus para atingir o teu objetivo." << std::endl;
    return (0);
}