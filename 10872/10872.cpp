#include <iostream>

unsigned int Factorial(unsigned int N) {
    unsigned int Num = N;
    if (N <= 1) {
        return 1;
    }
    else {
        return N * Factorial(N - 1);
    }
}

int main() {
    unsigned int Number = 0;
    std::cin >> Number;
    std::cout << Factorial(Number) << std::endl;
}