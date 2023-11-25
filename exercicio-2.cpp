#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    double base;
    int expoente;

    std::cout << "Digite a base:\n";
    std::cin >> base;

    std::cout << "Digite o expoente:\n";
    std::cin >> expoente;

    double result = pow(base, expoente);

    std::cout << std::fixed << std::setprecision(0);
    std::cout << base << " elevado a " << expoente << " é igual a " << result << "\n";

    return 0;
}