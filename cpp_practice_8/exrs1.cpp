#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int m = 12;

  int array[m];

  for (int i = 0; i < m; i++) {
    array[i] = rand() % 100;
  }

  cout << "Array to sort:" << endl;
  for (int i = 0; i < m; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  sort(array, array + m);

  cout << "Array after ascending sorting:" << endl;
  for (int i = 0; i < m; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}