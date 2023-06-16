#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;
public:
	//construktor
	StackArray() {
		top = -1;

	}
	void push() {
		int element;
		cout << "\nEnter an Element: ";
		cin >> element;

		if (top == 4) {//step 1
			cout << "Number of data exceds the limit" << endl;
		}

		top++;
		stack_array[top] = element;//step 3
		cout << endl;
		cout << element << " ditambahkan(pushed)" << endl;

		return;

	}
	void pop() {
		if (empty()) {//step 1
			cout << "\nStack is empty. Cannot pop" << endl;//1.a
			return;//1.b
		}
		cout << "\nThe popped element is:" << stack_array[top] << endl;//step 2
		top--;//step 3 decrement
	}
	//method for check if data is empty
	bool empty() {
		return(top == -1);

	}
	void display() {
		if (empty()) {
			cout << "\n stack is empty" << endl;

		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "\nEnter your choice: ";
		cin >> ch;
		switch (ch) {
		case '1': {
			s.push();
			break;
		}
	}