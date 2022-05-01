#include <iostream>

int main() {
	int Num1;
	int Num2;
	std::cin >> Num1 >> Num2;

	if (Num1 > Num2) {
		std::cout << ">" << std::endl;
	}
	else if (Num1 < Num2) {
		std::cout << "<" << std::endl;
	}
	else {
		std::cout << "==" << std::endl;
	}
}