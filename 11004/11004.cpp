#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

class PriorityQueue {
public:
	void Find(int FindPosition) {
		int Current = 1;
		for (std::vector<int>::iterator Itr = Que.begin(); Itr != Que.end(); Itr++) {
			if (Current == FindPosition) {
				std::cout << *Itr << std::endl;
				return;
			}
			else {
				Current++;
			}
		}
	}
	void Insert(int Value) {
		this->Que.push_back(Value);
	}
	void Sort(int CurrentQueSize) {
		sort(Que.begin(), Que.begin() + CurrentQueSize);
	}
private:
	std::vector<int> Que;
}; // 우선순위 큐 클래스

int main() {
	PriorityQueue PQ2;
	int SizeCounter;
	int FindCounter;
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cin >> SizeCounter >> FindCounter;

	for (int j = 0; j < SizeCounter; j++) {
		int InputValue;
		std::cin >> InputValue;
		PQ2.Insert(InputValue);
	}
	PQ2.Sort(SizeCounter);
	PQ2.Find(FindCounter);
} // 큐의 크기와 큐의 원소를 입력받아 오름차순 정렬한 후 앞에서 특정 번째의 수를 출력