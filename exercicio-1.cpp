#include <iostream>

int main(){
    int age;

    std::cout << "Digite sua idade:\n";
    std::cin >> age;

    const char* message = age >= 18 ? "Você é maior de idade\n" : "Você é menor de idade\n";
    
    std::cout << message;
    
    return 0;
}