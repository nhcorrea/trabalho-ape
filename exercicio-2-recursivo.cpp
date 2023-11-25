#include <iostream>
#include <iomanip>

double recursivePow(double base, int expoente){
    if(expoente == 0){
        return 1;
    }
    return base * recursivePow(base, expoente - 1);
}

int main(){
    double base;
    int expoente;

    std::cout << "Digite a base:\n";
    std::cin >> base;

    std::cout << "Digite o expoente:\n";
    std::cin >> expoente;

    double result = recursivePow(base, expoente);
    
    std::cout << std::fixed << std::setprecision(0);
    std::cout << base << " elevado a " << expoente << " é igual a " << result << "\n";

    return 0;
}