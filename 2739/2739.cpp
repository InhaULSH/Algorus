#include <iostream>

int main() {
	int Number = 0;
	std::cin >> Number;

	for (int i = 1; i < 10; i++) {
		std::cout << Number << " * " << i << " = " << Number * i << std::endl;
	}
}