#include <iostream>

int main() {
    int Number = 0;
    std::cin >> Number;
    int Scale = Number * 2;

    for (int i = 1; i < Number + 1; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }
        for (int j = 0; j < Scale - 2* i; j++) {
            std::cout << ' ';
        }
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    for (int i = Number - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }
        for (int j = 0; j < Scale - 2 * i; j++) {
            std::cout << ' ';
        }
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}