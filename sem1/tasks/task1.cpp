#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    const size_t n1 = 10;
    int arr[n1];
    
    for (size_t i = 0; i < n1; ++i) {
        cin >> arr[i];
    }
    // 10 5 14 17 18 12 -10 1 -45 13
    
    int minVal = arr[0], maxVal = arr[0];
    size_t minIdx = 0, maxIdx = 0;
    size_t minCount = 1, maxCount = 1;

    for (size_t i = 1; i < n1; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
            minCount = 1; 
        } else if (arr[i] == minVal) {
            minCount++;
        }

        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
            maxCount = 1; 
        } else if (arr[i] == maxVal) {
            maxCount++;
        }
    }

    cout << "Результат:\n";
    cout << "Min: " << minVal << " (Индекс: " << minIdx << ", Порядковый номер: " << minIdx + 1 << ", Кол-во: " << minCount << ")\n";
    cout << "Max: " << maxVal << " (Индекс: " << maxIdx << ", Порядковый номер: " << maxIdx + 1 << ", Кол-во: " << maxCount << ")\n";

    /*
    Результат:
    Min: -45 (Индекс: 8, Порядковый номер: 9, Кол-во: 1)
    Max: 18 (Индекс: 4, Порядковый номер: 5, Кол-во: 1)
    */

    return 0;
}
