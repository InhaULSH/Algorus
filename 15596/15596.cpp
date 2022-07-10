#include <iostream>
#include <vector>

long long sum(std::vector<int>& a) {
	std::vector<int>& Array = a;
	int Number = Array.size();
	long long Sum = 0;

	for (int i = 0; i < Number; i++) {
		Sum += Array[i];
	}
	return Sum;
}