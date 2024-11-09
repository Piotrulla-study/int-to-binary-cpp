#include <iostream>
#include <string>

using namespace std;

string toBinary(int amount) {
    if (amount == 0) return "0";

    string context = "";
    while (amount > 0) {
        context = to_string(amount % 2) + context;
        amount /= 2;
    }
    return context;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Liczba " << liczba << " w systemie binarnym to: " << toBinary(liczba) << endl;

    return 0;
}