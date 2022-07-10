#include <iostream>

int main() {
	int Number1 = 0;
	int Number2 = 0;
	std::cin >> Number1 >> Number2;
	if (Number1 > Number2) {
		std::cout << ">";
	}
	else if(Number1 < Number2) {
		std::cout << "<";
	}
	else {
		std::cout << "==";
	}
}