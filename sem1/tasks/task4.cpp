#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    const size_t m = 3;
    const size_t n = 3;
    int matrix[m][n];

    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    // 10 5 14 17 18 12 -10 1 -45

    int maxVal = matrix[0][0];
    size_t maxRow = 0;
    size_t maxCol = 0;

    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "Максимальный элемент: " << maxVal << " (Индексы: Строка: " << maxRow << ", Столбец: " << maxCol << ")\n";
    // Максимальный элемент: 18 (Индексы: Строка: 1, Столбец: 1)
    return 0;
}
