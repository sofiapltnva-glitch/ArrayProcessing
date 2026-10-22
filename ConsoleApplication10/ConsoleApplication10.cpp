/***********************
* Платонова Софья      *
* Обработка массивов   *
* Вариант 22           *
* *********************/

#include <iostream>

using namespace std;

int main() {
  const int maxCount = 3;
  int maxLineString;
  int matrix[maxCount][maxCount];
  int identicalElements[maxCount];
  int length;
  int maxLength = 0;

  cout << "Enter the values of the matrix elements: \n";

  for (int rowIndex = 0; rowIndex < maxCount; ++rowIndex) {
    for (int lowIndex = 0; lowIndex < maxCount; ++lowIndex) {
      cin >> matrix[rowIndex][lowIndex];
    }
      cout << '\n';
  }

  cout << "Output of the final matrix: \n";

  for (int rowIndex = 0; rowIndex < maxCount; ++rowIndex) {
    for (int lowIndex = 0; lowIndex < maxCount; ++lowIndex) {
      cout << matrix[rowIndex][lowIndex] << " ";
    }
      cout << '\n';
  }

  for (int rowIndex = 0; rowIndex < maxCount; ++rowIndex) {
    length = 1;
    cout << "\nLine " << rowIndex + 1 << ": ";

    for (int lowIndex = 0; lowIndex < maxCount; ++lowIndex) {
      if (lowIndex < maxCount - 1 &&
        matrix[rowIndex][lowIndex] == matrix[rowIndex][lowIndex + 1]) {
          ++length;
      } else {
        cout << length << " ";

        if (length > maxLength) {
          maxLength = length;
          maxLineString = rowIndex + 1;
        }

        length = 1;
        }
    }
    cout << '\n';
  }
}