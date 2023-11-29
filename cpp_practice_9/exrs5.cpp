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
	cout << "Fiveth task: " << endl;
	int max = numbers[0];
	int index_max = 0;
	for (int i = 0; i < size; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
			index_max = i;
		}
	}
	numbers[index_max] = 0;
	max = 0;
	for (int i = 0; i < size; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	cout << "The second bigger number: " << max;
	cout << endl << endl;
	return 0;
}