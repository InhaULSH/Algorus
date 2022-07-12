#include <iostream>

int main() {
    int Number = 0;
    std::cin >> Number;
    // N(0 <= N <= 500)을 입력받음
    int Counter = 0;
    while (Number > 0) {
        int FacOfNumber = Number;
        while (FacOfNumber % 5 == 0) {
            FacOfNumber /= 5;
            Counter++;
        }
        Number--;
    }
    // N!에서 존재하는 2의 지수는 5의 지수보다 크고 5 없이는 10을 만들수 없으므로
    // 5의 지수가 곧 10의 지수, 따라서 팩토리얼 전개식의 모든 숫자를 순회하며 5의 지수를 확인
    std::cout << Counter << std::endl;
}