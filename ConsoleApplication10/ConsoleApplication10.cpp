/***********************
* Платонова Софья      *
* Обработка массивов   *
* Вариант 22           *
***********************/

#include <iostream>

using namespace std;

int main() {
  int maxCount;
  int matrix[100][100];
  int maxLineString = 1;
  int length;
  int maxLength = 0;

  cout << "Enter the matrix size (1-100): ";
  cin >> maxCount;

  if (maxCount < 1 || maxCount > 100) {
    cout << "Invalid matrix size\n";
    return 0;
  }

  cout << "Enter the values of the matrix elements:\n";

  for (int rowIndex = 0; rowIndex < maxCount; rowIndex++) {
    for (int columnIndex = 0; columnIndex < maxCount; columnIndex++) {
      cin >> matrix[rowIndex][columnIndex];
    }
  }

  cout << "\nOutput of the final matrix:\n";

  for (int rowIndex = 0; rowIndex < maxCount; rowIndex++) {
    for (int columnIndex = 0; columnIndex < maxCount; columnIndex++) {
      cout << matrix[rowIndex][columnIndex] << " ";
    }
    cout << '\n';
  }

  for (int rowIndex = 0; rowIndex < maxCount; rowIndex++) {
    length = 1;

    cout << "\nLine " << rowIndex + 1 << ": ";

    for (int columnIndex = 1; columnIndex < maxCount; columnIndex++) {
      if (matrix[rowIndex][columnIndex] ==
        matrix[rowIndex][columnIndex - 1]) {
        length++;
      } else {
        cout << length << " ";
        length = 1;
      }

      if (length > maxLength) {
        maxLength = length;
        maxLineString = rowIndex + 1;
      }
    }

    cout << length << '\n';

    if (length > maxLength) {
      maxLength = length;
      maxLineString = rowIndex + 1;
    }
  }

  cout << "\nMaximum series length: " << maxLength << '\n';
  cout << "Line number: " << maxLineString << '\n';

  return 0;
}