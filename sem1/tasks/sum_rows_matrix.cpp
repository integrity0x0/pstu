#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    const size_t rows = 2;
    const size_t cols = 3;
    
    int matrix[rows][cols] = { {59, -200, 777}, {52, 67, 42} };
    
    // Находим максимальную длину числа
    int maxWidth = 1;
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            int currentVal = matrix[i][j];
            int width = 0;
            
            if (currentVal <= 0) {
                width = 1; 
            }
            
            int temp = currentVal;
            if (temp < 0) temp = -temp;
            while (temp > 0) {
                width++;
                temp /= 10;
            }
            
            if (width > maxWidth) {
                maxWidth = width;
            }
        }
    }
    
    // Выводим матрицу и суммы строк
    for (size_t i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (size_t j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];
            
            int currentVal = matrix[i][j];
            int currentWidth = 0;
            if (currentVal <= 0) currentWidth = 1;
            
            int temp = currentVal;
            if (temp < 0) temp = -temp;
            while (temp > 0) {
                currentWidth++;
                temp /= 10;
            }
            
            int spacesNeeded = (maxWidth + 1) - currentWidth;
            for (int s = 0; s < spacesNeeded; ++s) {
                cout << " ";
            }
            cout << matrix[i][j];
        }
        cout << " | Сумма: " << rowSum << endl;
    }
    
    return 0;
}
