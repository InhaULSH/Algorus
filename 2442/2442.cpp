#include <iostream>

int main() {
	int N;
	std::cin >> N;

	for (int i = 1; i < N + 1; i++) {
		for (int j = 0; j < N - i; j++) {
			std::cout << ' ';
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}