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


// 숫자형 Char와 Int의 전환
// Int + '0' => Char
// Char - '0' => Int (숫자형 Char인 경우에만 해당)


// 또는 배열을 이용해 구현할 수도 있음(배열로 큐를 구현하는 경우와 유사)
//#include <stdio.h>
//
// int main() {
//		int Number1, Number2, Number3, Array[10];
//		int Multiple = Number1 * Number2 * Number3;
//		for (int i = 0; Multiple > 0; i++) {
//			Array[Multiple % 10]++;
//			Multiple /= 10;
//		}
//		for (int i = 0; i < 10; i++) {
//			std::cout << Array[i] << std::endl;
//		}
//	}