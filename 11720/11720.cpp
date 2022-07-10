#include <iostream>
#include <string>

int main() {
	int Number = 0;
	std::string Numbers = "";
	std::cin >> Number;
	std::cin >> Numbers;
	int Sum = 0;
	for (int i = 0; i < Numbers.size(); i++) {
		Sum += Numbers[i] - '0';
	}
	std::cout << Sum;
}