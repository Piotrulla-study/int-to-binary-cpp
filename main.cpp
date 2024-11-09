#include <iostream>
#include <string>

std::string toBinary(int amount) {
    if (amount == 0) return "0";

    std::string context = "";
    while (amount > 0) {
        context = std::to_string(amount % 2) + context;
        amount /= 2;
    }
    return context;
}

int main() {
    int liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

    std::cout << "Liczba " << liczba << " w systemie binarnym to: " << toBinary(liczba) << std::endl;

    return 0;
}