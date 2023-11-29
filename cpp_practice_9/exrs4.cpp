#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	const int size = 5;
	int numbers[size];
	for (int i = 0; i < size; i++) {
		numbers[i] = rand() % 10;
	}
	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	cout << "Fourth task: " << endl;
	int A;
	cout << "Enter a number A: ";
	cin >> A;
	cout << "Numbers which bigger than A: ";
	for (int i = 0; i < size; i++) {
		if (numbers[i] > A) {
			cout << numbers[i] << " ";
		}
	}
	cout << endl<<endl;
	return 0;

}