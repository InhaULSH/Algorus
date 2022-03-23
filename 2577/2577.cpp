#include <iostream>
#include <string>

int main() {
	int Number1;
	int Number2;
	int Number3;
	std::cin >> Number1 >> Number2 >> Number3;

	std::string ResultNumber = std::to_string(Number1 * Number2 * Number3);
	for (int Figure = 0; Figure < 10; Figure++) {
		int Counter = 0;
		for (int Index = 0; Index < ResultNumber.length(); Index++) {
			if (ResultNumber[Index] == Figure + '0') {
				Counter++;
			}
			else {
				continue;
			}
		}
		std::cout << Counter << std::endl;
	}	
}

// Int + '0' => Char
// Char - '0' => Int (숫자형 Char인 경우에만 해당)