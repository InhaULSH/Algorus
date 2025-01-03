#include <iostream>
#include <string>

struct Node {
	int Data;
	Node* Next;

	Node(int Value) {
		this->Data = Value;
		this->Next = NULL;
	}
};

struct LinkedList {
	Node* Front;
	Node* Rear;

	LinkedList() {
		this->Front = NULL;
		this->Rear = NULL;
	}
	void addEnd(int Value) {
		Node* NewNode = new Node(Value);
		if (Front == NULL) {
			Front = Rear = NewNode;
		}
		else {
			Rear->Next = NewNode;
			Rear = NewNode;
		}
	}
	void removeFront() {
		if (Front != NULL) {
			Node* TempNode = Front;
			Front = Front->Next;
			delete TempNode;
		}
	}
};

class ListQueue {
public:
	ListQueue() {
		this->Que = new LinkedList();
		this->SizeOfQueue = 0;
	}
	int size() {
		return SizeOfQueue;
	}
	void empty() {
		std::cout << (this->Que->Front == NULL) << std::endl;
	}
	void enqueue(int Value) {
		this->Que->addEnd(Value);
		SizeOfQueue++;
	}
	int dequeue() {
		if (this->Que->Front == NULL) {
			std::cout << -1 << std::endl;
		}
		else {
			int ReturnValue = this->Que->Front->Data;
			this->Que->removeFront();
			SizeOfQueue--;
			return ReturnValue;
		}
	}
private:
	LinkedList* Que;
	int SizeOfQueue;
};

int main() {
	std::string Sentence;
	std::cin >> Sentence;

	ListQueue Queue3;
	int LeftBraceCounter = 0;
	int RightBraceCounter = 0;
	int LeftLargeBraceCounter = 0;
	int RightLargeBraceCounter = 0;
	for (int i = 0; i < Sentence.size(); i++) {
		Queue3.enqueue(Sentence[i]);
		if (Sentence[i] == '.') {
			break;
		}
	}
	for (int i = 0; i < Queue3.size(); i++) {
		if (Queue3.dequeue() == '(') {
			LeftBraceCounter++;
		}
		else if (Queue3.dequeue() == ')') {
			RightBraceCounter++;
		}
		else if (Queue3.dequeue() == '[') {
			LeftLargeBraceCounter++;
		}
		else if (Queue3.dequeue() == ']') {
			RightLargeBraceCounter++;
		}
		else {
			continue;
		}
	}

	if (LeftBraceCounter == RightBraceCounter && LeftLargeBraceCounter == RightLargeBraceCounter) {
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
}