#include <iostream>

using namespace std;

int main() {
  int m = 12;
  
  int array[m];
  
  for (int i = 0; i < m; i++) {
    array[i] = rand() % 100;
  }

  int max_index = max_element(array, array + m) - array;
  
  for (int i = 0; i < max_index; i++) {
    array[i] = 0;
  }

  cout << "Масив після заміни:" << endl;
  for (int i = 0; i < m; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
