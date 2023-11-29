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
	cout << "Sixth task: " << endl;
	for (int i = 0; i < size; i++) {
		if (numbers[i] == 0) {
			cout <<"The first index where the element equals zero: "<< i<<endl;
			return 0;
		}
	}
	cout << "There are no zero!";
	return 0;
}