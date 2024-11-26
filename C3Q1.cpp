#include <iostream> // for inputs and outputs

int main(){

    int n1, n2, n3, n4, sum;
    std::cout << "Enter the first number:\n";
    std::cin >> n1;
    std::cout << "Enter the second number:\n";
    std::cin >> n2;
    std::cout << "Enter the third number:\n";
    std::cin >> n3;
    std::cout << "Enter the fourth number:\n";
    std::cin >> n4;
    sum = n1 + n2 + n3 + n4;

    std::cout << "The sum of the four numbers is " << sum << "." << std::endl;
    return 0;
}